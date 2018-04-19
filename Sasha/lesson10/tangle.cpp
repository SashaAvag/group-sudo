#include <iostream>
#include <math.h>

class  Point {
    private:
        float x;
        float y;
    public:
        Point (float x = 0, float y = 0)
        {
            this->x = x;
            this->y = y;
        }
        void setX (int x) {
            this->x = x;
        }
        void setY (int y) {
            this->y = y;
        }
        Point (const Point& p){
            x = p.x;
            y = p.y;
        }
        float getX () {
            return x;
        }
        float getY () {
            return y;
        }
        virtual void foo() {
            std::cout << "Point" << std::endl;
        }
        void boo() {
            std::cout << "Point" << std::endl;
        }
       ~Point (){};
};
class Triangle: public Point {
    private:
        Point a,b;
    public:
        Triangle (Point a,Point b,Point c)
        :Point(c),a(a), b(b)
        {}

        float sideA () {
            return sqrt(pow(b.getX() - getX(), 2) + pow(b.getY() - getY(), 2));
        }
        float sideB () {
            return sqrt(pow(a.getX() - getX(), 2) + pow(a.getY() - getY(), 2));
        }
        float sideC () {
            return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
        }
        void printTr () {
            float par = sideA() + sideB() + sideC();
            std::cout << "Paragic of Triangle: " << par <<std::endl;
            std::cout << "The area of Triangle "<< sqrt( par * (par-sideA()) * (par - sideB()) * (par - sideC())) <<std::endl;
        }
        virtual void foo() {
            std::cout << "Triangle" << std::endl;
        }
        void boo() {
            std::cout << "Triangle" << std::endl;
        }
        ~Triangle(){};

};

class Line : Point {
    private:
        Point a;
    public:
        Line (Point c,Point a) 
            :Point(c), a(a)
        {}
        float getLine() {
            return  sqrt( pow(getX()-a.getX(),2) + pow(getY()-getY(),2) );
        }
        void printLn() {
            std::cout << "The size of line: " << getLine() << std::endl;

            float k = getY() / getX();
            for (int i = getX(); i <= a.getX(); i++) {
                float b = getY() - getX() * k;
                std::cout <<"x = "<<  i << ", y = " << k * i << " b = " << b << std::endl;
            }
        }
        ~Line() {}

};
class Rectangle: public Point {
    private:
        Point b;
    public:
        Rectangle (Point c, Point b)
        :Point(c),b(b)
        {}
        float sideA () {
            if ((b.getY() - getY()) > 0){
                return (b.getY() - getY());
            }else {
                return ((getY() -b.getY()));
            }
        }
        float sideB () {
            if ((b.getX() - getX()) > 0){
                return (b.getX() - getX());
            }else {
                return ((getX() -b.getX()));
            }
        }
        void printRec() {
            std::cout << "Area of Rectangle: " << (sideA() * sideB()) << std::endl;
            std::cout << "Paragic of that rectangle: " << (2 * (sideA() + sideB())) << std::endl;
        }
        ~Rectangle() {};

};

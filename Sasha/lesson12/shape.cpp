#include <iostream>
#include <math.h>

class Shape {
    public:
        virtual float getP() = 0;
        virtual float getS() = 0;
};

class  Point: public Shape {
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
        virtual float getS() {
            std::cout << "Point has no area" << std::endl;
            return -1;
        }
        virtual float getP() {
            std:: cout << "Point has no area" << std::endl;
            return -1;
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
        virtual float getP() {
            return sideA() + sideB() + sideC();
        }
        virtual float getS() {
            float par = getP() / 2;
            return  sqrt( par * (par-sideA()) * (par - sideB()) * (par - sideC()));
        }
        ~Triangle(){};

};

class Rectangle: public Point {
    private:
        Point a;
    public:
        Rectangle (Point a, Point b)
        :Point(b),a()
        {}
        float sideA () {
            if ((a.getY() - getY()) > 0){
                return (a.getY() - getY());
            }else {
                return ((getY() -a.getY()));
            }
        }
        float sideB () {
            if ((a.getX() - getX()) > 0){
                return (a.getX() - getX());
            }else {
                return ((getX() -a.getX()));
            }
        }
        virtual float getS() {
            return (sideA() * sideB()) ;
        }
        virtual float getP() {
            return (2 * (sideA() + sideB()));
        }
        ~Rectangle() {};

};

void printS (Shape* obj) {
    std::cout <<"Area: " << obj->getS() << std::endl;
}
void printP (Shape* obj) {
    std::cout <<"Paragic: " << obj->getS() << std::endl;
}

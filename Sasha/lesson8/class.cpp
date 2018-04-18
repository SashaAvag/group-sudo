#include <iostream>
#include <math.h>

class Point {
    private:
        float x;
        float y;
    public:
        Point (float x, float y)
        {
            this->x = x;
            this->y = y;
        }
        float getX () {
            return x;
        }
        float getY () {
            return y;
        }
       ~Point (){};
};
class Triangle: public Point {
    private:
        float x1;
        float y1;
        float x2;
        float y2;
    public:
        Triangle (float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0, float x = 0, float y = 0)
        :Point(x,y)
        {
            this->x1 = x1;
            this->y1 = y1;
            this->x2 = x2;
            this->y2 = y2;
        }
        float getX1 () {
            return x1;
        }
        float getY1 () {
            return y1;
        }
        float getX2 () {
            return x2;
        }
        float getY2 () {
            return y2;
        }
        float sideA () {
            return sqrt(pow(getX2() - getX(), 2) + pow(getY2() - getY(), 2));
        }
        float sideB () {
            return sqrt(pow(getX1() - getX(), 2) + pow(getY1() - getY(), 2));
        }
        float sideC () {
            return sqrt(pow(getX2() - getX1(), 2) + pow(getY2() - getY1(), 2));
        }
        void printTr () {
            float par = sideA() + sideB() + sideC();
            std::cout << "Paragic of Triangle: " << par <<std::endl;
            std::cout << "The area of Triangle "<< sqrt( par * (par-sideA()) * (par - sideB()) * (par - sideC())) <<std::endl;
        }
        ~Triangle(){};

};
class Rectangle: public Point {
    private:
        float x3;
        float y3;
    public:
        Rectangle (float x3 = 0, float y3 = 0,float x = 0, float y = 0)
        :Point(x,y)
        {
            this->x3 = x3;
            this->y3 = y3;
        }
        float getX3 () {
            return x3;
        }
        float getY3 () {
            return y3;
        }
        float sideA () {
            if ((getY3() - getY()) > 0){
                return (getY3() - getY());
            }else {
                return ((getY() -getY3()));
            }
        }
        float sideB () {
            if ((getX3() - getX()) > 0){
                return (getX3() - getX());
            }else {
                return ((getX() -getX3()));
            }
        }
        void printRec() {
            std::cout << "Area of Rectangle: " << (sideA() * sideB()) << std::endl;
            std::cout << "Paragic of that rectangle: " << (2 * (sideA() + sideB())) << std::endl;
        }
        ~Rectangle() {};
    
};

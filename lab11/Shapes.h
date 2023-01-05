#include <string>
using namespace std;

class Polygon
{
protected:
    string s;
    int w,h;

public:

    virtual double getArea() = 0;

    virtual string getName() = 0;

};

class Rectangle : public Polygon
{

public:

    Rectangle (string name, int width, int height){
        s=name;
        w=width;
        h=height;
    }

    double getArea(){
        return w*h;
    }

    string getName(){
        return s;
    }

};

class Triangle : public Polygon
{

public:

    Triangle (string name, int width, int height){
        s=name;
        w=width;
        h=height;
    }

    double getArea(){
        return w*h*0.5;
    }

    string getName(){
        return s;
    }

};

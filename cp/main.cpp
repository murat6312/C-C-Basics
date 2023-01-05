#include<iostream>
using namespace std;

class Point
{
private:
    double x;
public:
    Point(double x1) { x = x1; }

    // Copy constructor
    Point(const Point &p2) {x = p2.x; }


    double getX()  {  return x; }

    double mul(Point a){
        return x*a.getX();
    }

    Point& operator=(const Point& rhs){

        operator=(rhs);
        return * this;
    };

};

int main()
{
    Point p1(0.4); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here
    Point z(9.2);
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX() ;
    cout << "\np2.x = " << p2.getX() <<  endl;
    z = p1.mul(p2);
    cout << "  ..."  <<z.getX();
    return 0;
}

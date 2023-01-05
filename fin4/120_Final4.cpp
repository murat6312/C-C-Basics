
#include <iostream>
using namespace std;

class Shape{

public:

    virtual double getArea() = 0;

};

class Rectangle : public Shape{

private:
    int w,h;

public:
    Rectangle (){
        w=1;
        h=1;
    }

    Rectangle (int x){
        w=x;
        h=1;
    }

    Rectangle (int width, int height){
        w=width;
        h=height;
    }

    Rectangle (const Rectangle &r){
        w=r.w;
        h=r.h;
    }

    double getArea(){
        return w*h;
    }
};

class Circle : public Shape{
private:
    int m;

public:
    Circle (int x){
        m=x;
    }

    double getArea(){
        return 3.14*m*m;
    }
};

int main()
{
	int a, b, c, d, e;

	cin>>a>>b;
	cin>>c>>d>>e;

	Circle c1(a);
	Circle c2(b);
	Rectangle r1(c,d);
	Rectangle r2, r3(e);
	Rectangle r4(r1);
	Shape *arr[]={&c1,&r1,&r4,&r3,&r2,&c2};
	for(int i=0; i<6; i++)
		cout<<arr[i]->getArea()<<endl;
	return 0;

}


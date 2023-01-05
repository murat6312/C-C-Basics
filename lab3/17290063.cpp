#include <iostream>
#include <cmath>

using namespace std;

class Rational{

int x,y;

public:

    Rational(int a=0, int b=0){

        cout << "Constructor is called." << endl;
        x=a;
        y=b;

    }

    Rational(Rational &m){

        cout << "Copy Constructor is called." << endl;
        x=m.get_x();
        y=m.get_y();

    }

    Rational add(Rational m){
        int z = x*m.get_y();
        int k = y*m.get_x();
        int t = y*m.get_y();

        int obeb1=gcd(z+k, t);
        int b = z+k;
        if ( obeb1 != 1){
            b = b/obeb1;
            t = (t/obeb1);

        }

        Rational xd(z+k,t);

        return xd;
    }


    Rational multiply(Rational m){

        int x1=x, y1=y, x2=m.get_x(), y2=m.get_y() ;
        int obeb1=gcd(m.get_y(), x);
        int obeb2=gcd(m.get_x(), y);
        if ( obeb1 != 1){

            x1 = (x1/obeb1);
            y2 = (y2/obeb1);
        }

        if (obeb2 !=1){

            y1 = (y1/obeb2);
            x2 = (x2/obeb2);
        }

        int z = x2*x1;
        int k = y2*y1;

        Rational xd(z,k);

        return xd;
    }

    void print(){

        cout << get_x() << "/" << get_y() << endl;
    }

    void set_x(int a){
        x=a;
    }

    void set_y(int a){
        y=a;
    }

    int get_x(){
        return x;
    }

    int get_y(){
        return y;
    }


    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);

    }

};

Rational addGlobal(Rational m, Rational n){m.print();

    int z = n.get_x()*m.get_y();
    int k = n.get_y()*m.get_x();
    int t = n.get_y()*m.get_y();


    int obeb1=m.gcd(z+k, t);
    int b = z+k;

    if ( obeb1 != 1){
            b = b/obeb1;
            t = (t/obeb1);

        }
     Rational xd(b,t);

    return xd;
}

Rational multiplyGlobal(Rational m, Rational n){

    int x1, y1, x2, y2 ;
    int obeb1=m.gcd(m.get_y(), n.get_x());
    int obeb2=m.gcd(m.get_x(), n.get_y());
    if ( obeb1 != 1){
        int t = m.get_y()/obeb1;
        x2 = (n.get_x()/obeb1);
        y1 = (t);
    }

    if (obeb2 !=1){

        int t = m.get_x()/obeb2;
        y2 = (n.get_y()/obeb2);
        x1 = (t);
    }

    int z = x2*x1;
    int k = y2*y1;

    Rational xd(z,k);

    return xd;

}



int main()
{
	int a, b, c, d;

	cin>>a>>b;

	cin>>c>>d;

	Rational r1(a,b);

	r1.print();

	Rational r2(r1);

	r2.print();

	Rational r3(c,d);

	r3. print();

	Rational r4, r5, r6, r7;

	r4=r3.add(r1);

	r5=addGlobal(r3,r4);

	r6=r2.multiply(r3);

	r7=multiplyGlobal(r2,r6);

	r4.print();
	r5.print();
	r6.print();
	r7.print();

	return 0;
}




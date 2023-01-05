#include <iostream>
using namespace std;

class Rational
{

public:

    Rational(){

        n=0;
        d=0;

    }

    Rational(Rational &m){

        cout << "Copy Constructor is called." << endl;
        n=m.get_n();
        d=m.get_d();

    }

    friend ostream &operator<<( ostream &output, const Rational &D ) {
         output << D.n << "/" << D.d << endl;
         return output;
    }

    friend istream &operator>>( istream  &input, Rational &D ) {
        char slash;
        input >> D.n >> slash >> D.d ;
        int obebd = D.gcd(D.n, D.d);
        if(obebd != 1){
            D.n = D.n/obebd;
            D.d = D.d/obebd;
        }
        return input;
    }

    Rational operator + (Rational &m){
        Rational Sum;
        int z = n*m.get_d();
        int k = d*m.get_n();
        int t = d*m.get_d();

        int obeb1=gcd(z+k, t);
        int b = z+k;
        if ( obeb1 != 1){
            b = b/obeb1;
            t = (t/obeb1);

        }
        Sum.n = z+k;
        Sum.d = t;
        return Sum;
    }

    void operator ++(int) {
        n = n+d;
        d = d;
    }

    void operator --(int) {
        n = n-d;
        d = d;
    }

    Rational operator * (Rational &m){
        Rational Mult;
        int x1=n, y1=d, x2=m.get_n(), y2=m.get_d() ;
        int obeb1=gcd(m.get_d(), n);
        int obeb2=gcd(m.get_n(), d);
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
        Mult.n = z;
        Mult.d = k;
        return Mult;
    }

    void print(){

        cout << get_n() << "/" << get_d() << endl;
    }

    int get_n(){
        return n;
    }

    int get_d(){
        return d;
    }


    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);

    }

	private:
		int n;
		int d;
};


int main()
{

	Rational r1, r2;

	cin>>r1>>r2;

	cout<<r1<<r2;

	Rational r3(r1);

	r3.print();

	Rational r4, r5, r6, r7;

	r4 = r2 + r3;

	r5 = r2 * r3;

	cout<<r4<<r5;

	r4++;

	cout<<r4;

	r5--;

	cout<<r5;

	return 0;
}




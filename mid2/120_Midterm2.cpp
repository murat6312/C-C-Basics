#include <iostream>
using namespace std;

class Complex
{

    public:

        Complex(){
            real=0;
            imag=0;
        }

        Complex(Complex &c){
            real = c.real;
            imag = c.imag;
        }

        friend ostream &operator<<( ostream &output, const Complex &C ) {
             if (C.imag > 0){
                output << C.real << "+" << C.imag << "i"<< endl;
             }
             else if(C.real == 0){
                output << C.imag << "i"<< endl;
             }
             else if(C.imag == 0){
                output << C.real << endl;
             }
             else{
                output << C.real << C.imag << "i"<< endl;
             }
             return output;
        }

        friend istream &operator>>( istream  &input, Complex &C ) {
            char y;
            input >>  C.real >> C.imag >> y;
            return input;
        }

        Complex operator + (Complex &c){

        Complex sum;

           sum.real = real +  c.real;
           sum.imag = imag +  c.imag;
           return sum;

        }

        Complex operator * (Complex &c){

        Complex mult;

           mult.real = real * c.real - imag * c.imag;
           mult.imag = real * c.imag + imag*c.real;
           return mult;

        }



	private:
		double real;
		double imag;


};






int main()
{
	Complex c1;

	cin>>c1;

	Complex c2(c1);

	Complex c3;

	cin>>c3;

	Complex c4, c5;

	c4=c2+c3;
	c5=c2*c3;

	cout<<c1<<c2<<c3<<c4<<c5;


	return 0;
}




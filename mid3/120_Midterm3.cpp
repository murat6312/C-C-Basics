
#include <iostream>
using namespace std;

class Shape
{

    public:

        Shape(){
            a=4;
            b=4;
            c='#';
        }

        Shape(int x, int y, char z){
            a=x;
            b=y;
            c=z;
        }

        Shape operator + (Shape &s){
            Shape sum;
            sum.a = a+ s.a;
            sum.b = b + s.b;
            sum.c = c;
            return sum;
        }

        Shape operator * (int x){
            Shape mul;
            mul.a = a*x;
            mul.b = b*x;
            mul.c = c;
            return mul;
        }

        void printShape(){

            for (int i=1; i<=b; i++){
                cout << c ;
            }

            cout << endl;

            for (int i=1; i<=a-2; i++){
                cout << c;
                for (int k=0; k<b-2; k++){
                    cout << " " ;
                }
                cout << c ;
                for (int m=i; m>=1; m--){
                    cout << c;
                }
                cout << endl;
            }

            for (int i=1; i<=b; i++){
                cout << c ;
            }
            cout << endl;
        }

        void set(int x, int y, char z){
            a=x;
            b=y;
            c=z;
        }

	private:
		int a;
		int b;
		char c;
};

int main()
{
	int number1, number2, number3, number4;
	char c1, c2;

	cin>>number1>>number2>>number3>>number4>>c1>>c2;

	Shape s1;

	s1.printShape();
	cout<<endl;

	Shape s2(number1,number2,c1);

	s2.printShape();
	cout<<endl;

	Shape s3;

	s3.set(number3,number4,c2);

	s3.printShape();
	cout<<endl;

	Shape s4;
	s4 = s2 + s3;

	s4.printShape();
	cout<<endl;

	Shape s5;
	s5 = s3 * 3;

	s5.printShape();
	cout<<endl;

	return 0;
}


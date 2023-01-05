
#include <iostream>
using namespace std;

class X
{
    public:

        X(){
            i = 8;
            j = 8;
            cout << "Constructor\n";
        }

        X(int a, int b){

            i = a;
            j = b;
            cout << "Constructor\n";
            if((i+j)%2==0){
                throw 0;
            }
        }

        ~X(){

            cout << "Destructor "<<8+j<<" "<< 8+j<< endl;
        }

        friend ostream &operator<<( ostream &output, const X &D ) {
             output << D.i << "@" << D.j << endl;
             return output;
        }

        void function1(int z){

            if((i+j)<2*j && 2*j<=16){
                cout << "Caught in member function " << z << endl;
            }else{
                throw z;
            }
        }

        void function2(int z){
            if((i+j)<2*j && 2*j<16){
                cout << "Caught in member function " << z << endl;
            }else{
                throw z;
            }

        }

	private:
		int i;
		int j;
};

int main()
{
	int i1, i2 ,i3;
	cin>>i1>>i2>>i3;

	try
	{
		X x2(i1,i2);
		X x1;

		cout<<x1;
		cout<<x2;

		x1.function1(i3);
		x2.function2(i3);

		cout<<x1;
		cout<<x2;
	}
	catch(int s)
	{
		cout<<"Caught in main "<<s<<"\n";
	}

	return 0;
}


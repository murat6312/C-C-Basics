
#include <iostream>
using namespace std;

class X
{
    public:

        X(){
        i = 3;
        j = 3;
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

        cout << "Destructor\n";
        }

        friend ostream &operator<<( ostream &output, const X &D ) {
         output << D.i << " " << D.j << endl;
         return output;
        }

        void function1(int z){
            if((i+j)%2 == 0){
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
		X x1;
		X x2(i1,i2);

		cout<<x1;
		cout<<x2;

		x1.function1(i3);
		x2.function1(i3);
	}
	catch(int s)
	{
		cout<<"Caught in main\n";
	}


	return 0;
}


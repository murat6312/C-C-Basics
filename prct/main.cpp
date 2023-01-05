#include <iostream>
using namespace std;

class DisplayShape{

    public:

        int num1;
        int num2;
        char ch;

        DisplayShape(int n1=4, int n2=6, char c='&'){

            num1 = n1;
            num2 = n2;
            ch = c;

        }

        void displayRectangle(){

            for (int i=1; i<=num2+4; i++){
                cout << ch;
            }
            cout << endl;

            for (int i=1; i<=num1+2; i++){

                if (i==1 || i==num1+2){

                    cout << ch ;
                    for (int i=1; i<=num2+2; i++){
                        cout << " ";
                    }
                    cout << ch << endl;

                }
                else{
                    cout << ch << " ";
                    for (int i=1; i<=num2; i++){
                        cout << ch;
                    }
                    cout << " " << ch << endl;
                }
            }

            for (int i=1; i<=num2+4; i++){
                cout << ch;
            }

            cout << endl;
        }

        void displayTriangle(){
            for (int x=num2; x>=1; x--){

                for (int i=x; i>1; i--){
                    cout << " ";
                }

                for (int m=1; m<=num2-x+1; m++){
                    cout << ch;
                }
                cout << endl;
            }
            cout << endl;
        }

        void set(int n1, int n2, char c){

            num1 = n1;
            num2 = n2;
            ch = c;

        }

};

int main()
{
	int i1, i2, i3, i4;
	char c1, c2;

	cin>>i1>>i2>>c1;
	cin>>i3>>i4>>c2;

	DisplayShape ps1;

	ps1.displayRectangle();
	cout<<endl;
	ps1.displayTriangle();
	cout<<endl;

	DisplayShape ps2(i1,i2,c1);

	ps2.displayRectangle();
	cout<<endl;
	ps2.displayTriangle();
	cout<<endl;

	ps2.set(i3,i4,c2);

	ps2.displayRectangle();
	cout<<endl;
	ps2.displayTriangle();
	cout<<endl;

	return 0;
}

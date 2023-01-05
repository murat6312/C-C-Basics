
#include <iostream>
using namespace std;

class Y
{
private:
    int x,y;
    char a,b;
public:

    Y (){
        x=4;
        y=4;
        a='a';
        b='*';
    }

    Y (int num1, int num2, char c1, char c2){

        x=num1;
        y=num2;
        a=c1;
        b=c2;

    }

    void set(int num1, int num2, char c1, char c2){

        x=num1;
        y=num2;
        a=c1;
        b=c2;

    }
    friend ostream& operator<<(ostream& out, Y &g)
	{
	    for(int i=1; i<=g.x; i++){

            for (int k=i; k<g.x; k++){
                out<<" ";
            }

            for(int m=2*i-1; m>=1; m--){
                out<< g.b;
            }

            if (i==1 || i==g.x){
                for(int n=1; n<=g.y; n++){
                    out<< g.a;
                }
            }
            else {
                int z=1;
                out << g.a;
                for(int n=1; n<=g.y-2; n++){
                    out<<" ";
                }

                for(int n=1; n<=i; n++){
                    out<< z;
                    z+=1;
                }
            }

            out<<endl;
	    }

        return out;

	}


};

int main()
{
	int number1, number2;;
	char c1, c2;

	cin>>number1>>number2;
	cin>>c1>>c2;

	Y y1;

	cout<<y1;
	cout<<endl;

	Y y2(number1,number2,c1,c2);

	cout<<y2;
	cout<<endl;

	Y y3;

	y3.set(number1+2,number2+1,c2,c1);

	cout<<y3;
	cout<<endl;

	return 0;
}


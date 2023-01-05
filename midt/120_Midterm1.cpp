#include <iostream>
using namespace std;

template <class T>
void printRepetitiveElements (T arr[], int s){

    int i, j, x=0;
    T a[100];
    bool q= true;
    for(i = 0; i < s; i++){

        for(j = i + 1; j < s; j++){
            if(arr[i] == arr[j] ){
                a[x]=arr[i];
                x++;
            }
        }
    }

    for(i = 0; i < x; i++){

        for(j = i + 1; j < x; j++){
            if(a[i] == a[j] ){
                q=false;
            }
        }
        if (q==true){
            cout << a[i] << " ";
        }
        else{
            q=true;
        }
    }
    cout << endl;
}

int main()
{
	int b1[8];
	double d1[5];
	char c1[7];

	int i=0;


	while(i<8)
	{
		cin>>b1[i];
		i++;
	}
	i=0;
	while(i<5)
	{
		cin>>d1[i];
		i++;
	}
	i=0;
	while(i<7)
	{
		cin>>c1[i];
		i++;
	}

	printRepetitiveElements(b1,8);
	printRepetitiveElements(d1,5);
	printRepetitiveElements(c1,7);

	return 0;
}


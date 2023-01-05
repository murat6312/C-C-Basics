#include <iostream>
using namespace std;

template <class T>
void inputArrayElements(T *arr, int num){

    for (int i=0; i<num; i++){
        cin >> arr[i];
    }

}

template <class T>
void printArrayElements(T *arr, int num){

    T temp;
    for (int m=0; m<num; m++){

        for(int i=0; i<num-1; i++){

            if (arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
    }

    for (int i=0; i<num; i++){
        cout << arr[i]<< " ";
    }
    cout << "\n";
}

template <class T>
T* merge(T *arr1, int num1,T *arr2, int num2){

    int c = num1 + num2;
    T* newarr = new T [c]; //In functions assign your arrays this way
                            //otherwise you will not be able to return it
    for(int i=0; i<num1; i++){
        newarr[i]=arr1[i];
    }
    int x=0;
    for(int i=num1; i<c; i++){
        newarr[i]=arr2[x];
        x++;
    }

    return newarr;
}
int main()

{
	int aCount1, bCount1;
	int aCount2, bCount2;

	cin>>aCount1>>aCount2;

	int *a1=new int[aCount1];
	int *a2=new int[aCount2];

	inputArrayElements(a1,aCount1);
	inputArrayElements(a2,aCount2);

	cin>>bCount1>>bCount2;

	double *b1=new double[bCount1];
	double *b2=new double[bCount2];

	inputArrayElements(b1,bCount1);
	inputArrayElements(b2,bCount2);

    int *newI=merge(a1, aCount1, a2, aCount2);
	double *newD=merge(b1, bCount1, b2, bCount2);

	printArrayElements(newI,aCount1+aCount2);
	printArrayElements(newD,bCount1+bCount2);

	return 0;
}


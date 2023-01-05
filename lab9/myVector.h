#include<iostream>
#include<string>
using namespace std;


template<class T>
class myVector
{
	public:

		myVector(int s){
            numAllocated = s;
            arr = new T [numAllocated];
            numUsed = 0;
		}

	  	~myVector(){
            delete[] arr;
	  	}

	  	int size(){
            return numUsed;
	  	}

	  	void add(T s){
	  	    if (numUsed<numAllocated ){
                arr[numUsed] = s;
                numUsed += 1;
            }
            else{
                cout<<"Out of space.\n";
            }

	  	}

	  	void getElement(int index){
            if (index>=0 && index<=numAllocated ){
                cout<<arr[index]<<endl;
            }
            else{
                cout<<"Out of space.\n";
            }
	  	}

		void remove(T s){
		    int x=-1;
		    for (int i=0; i<numAllocated ; i++){
                if(arr[i]==s){
                    x=i;
                }
		    }
		    if(x != -1){
                for (int i=x; i<numAllocated - 1; i++){
                    arr[i] = arr[i+1];
                }
                numUsed -= 1;
		    }

		}

		void print(){
            for (int i=0; i<numUsed; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
		}
	private:
		T* arr;
		int numUsed;
		int numAllocated;
};


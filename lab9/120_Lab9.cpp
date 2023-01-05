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




int main()
{
	int vector_size;
	cin>> vector_size;
  	myVector <char> vec(vector_size);

	char temp;
	for(int i=0; i< vector_size; i++)
	{
		cin>>temp;
		vec.add(temp);
	}

  	vec.add('c');


  	vec.print();

        vec.getElement(-1);
	vec.getElement(vec.size()+2);


	cin>> vector_size;
	myVector <int> vec2(vector_size);
  	int temp2;
	for(int i=0; i<vector_size; i++)
	{
		cin>>temp2;
		vec2.add(temp2);
	}

  	vec2.print();

	vec2.remove(2);

	cout<<"After element-wise deletion:"<<endl;
	vec2.print();
  	return 0;
}

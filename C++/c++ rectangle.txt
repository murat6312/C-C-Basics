#include <iostream>

using namespace std;

int main()
{

    int x,vertical,horizontal;
    cout<<"enter 0 if you want first vertical after horizontal enter 1 if you want reverse:";
    cin >> x  ;
    cin>> vertical  ;
    cin>> horizontal ;
    if(x==0){

        for(int i=1; i<=horizontal; i++){
            cout<<"*";
        }
        cout<<endl;
        for(int i=1; i<=vertical-2; i++){
            cout<<"*";
            for(int i=1; i<=horizontal-2; i++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        for(int i=1; i<=horizontal; i++){
            cout<<"*";
        }
    }
    if(x==1){
        for(int i=1; i<=vertical; i++){
            cout<<"*";
        }
        cout<<endl;
        for(int i=1; i<=horizontal-2; i++){
            cout<<"*";
            for(int i=1; i<=vertical-2; i++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        for(int i=1; i<=vertical; i++){
            cout<<"*";
        }
    }

}

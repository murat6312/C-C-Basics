#include <iostream>

using namespace std;

int topla(int x, int y ){
    return x *y;
    }

class MyClass {
  public:
    int x,y;

    int topla(int x, int y ){
        return x *y;
    }
};

int main()
{
    int a=5;
    int b=8;
    MyClass obje;
    cout << obje.topla(a,b) << endl;
    return 0;
}

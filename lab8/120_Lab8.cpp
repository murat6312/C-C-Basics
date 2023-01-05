#include <iostream>
using namespace std;

class Base{

private:
    int x;

public:

    Base (int i=0){
        x=i;
    }

    void print(){
        cout << x << endl;
    }

    void message(){
        cout << "base\n";
    }

};


class Derived : public Base{

private:
    int a,b;

public:

    Derived(int j=0, int k=0):Base(k){
        a=j;
        b=k;
    }

    void print(){
        cout << b << endl;
    }

    void message(){
        cout << "derived\n";
    }

};

int main()
{
	int i, j, k;

	cin>>i>>j>>k;

	Base *p;
	Base a(i);
	Base *b=&a;
	Derived c(j,k);
	Derived *d=&c;
	p=d;
	p->print();
	p->message();
	b->print();
	b->message();
	c.message();

	return 0;
}

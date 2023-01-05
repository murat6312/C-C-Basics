#include<iostream>

using namespace std;

class Date{

public:
    int d,m,y;

    Date (){

    int day, month, year;
    cin >> day >> month >> year;

    d = day;
    m = month;
    y = year;

    }

    Date (int day , int month, int year ){

        d = day;
        m = month;
        y = year;

    }

    void printDate2(){
        cout << d << "/" << m << "/" << y << endl;
    }

};


class Person : public Date{

string n;

public:

    Person (string name, Date x) : Date(x){

        n = name;
        d = x.d;
        m = x.m;
        y = x.y;

    }


    void printInfo(){
        cout << n << ": Appointment Day:" << d << "." << m << "." << y << endl;
    }

};


int main() {

    int d, m, y;
    string s;

    cin>>d>>m>>y;
    cin>>s;

	Date d1(d,m,y);

	Date d2;

    Person p(s, d1);

    p.printInfo();

    d2.printDate2();

    return 0;

}

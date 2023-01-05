#include<iostream>

using namespace std;

class Date{

public:

    Date(int d, int m, int y){
        day=d;
        month=m;
        year=y;
        if(month<1 || month>12){
            month=1;
        }
    }

    void setDay(int d){
        day=d;
    };

    void setMonth(int m){
        month=m;
        if(month<1 || month>12){
            month=1;
        }
    };

    void setYear(int y){
        year=y;
    };

    int getDay(){
        return day;
    };

    int getMonth(){
        return month;
    };

    int getYear(){
        return year;
    };

    void displayDate (){
    cout<<getDay()<<"/"<<getMonth<<"/"<<getYear<<endl;
    };

private:
    int day;
    int month;
    int year;
};

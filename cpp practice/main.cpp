#include <iostream>

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
    }

    void setMonth(int m){
        month=m;
        if(month<1 || month>12){
            month=1;
        }
    }

    void setYear(int y){
        year=y;
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }

    void displayDate (){
    std::cout<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<std::endl;
    }

private:
    int day;
    int month;
    int year;
};

int main(){
    Date date1(5,6,1981);
    Date date2(1,1,2005);

    std::cout<<"Day:"<<date1.getDay()<<"/n"<<"Month:"<<date1.getMonth()
    <<"/n"<<"Year:"<<date1.getYear()<<std::endl;

    std::cout<<date1.displayDate()<<date2.displayDate();
}

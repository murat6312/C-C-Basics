#include <iostream>
using namespace std;

#include <iomanip>
using namespace std;

class Time{

private:
    int h, m, s;

public:

    Time(){

        h = 0;
        m = 0;
        s = 0;

    }

    Time (Time &t){
        h = t.get_hour();
        m = t.get_minute();
        s = t.get_second();
    }

    friend ostream &operator<<( ostream &output, const Time &D ) {
         output << D.h << ":" << D.m << ":"<< D.s;
         return output;
    }

    friend istream &operator>>( istream  &input, Time &D ) {

        input >> D.h  >> D.m  >> D.s ;
        return input;
    }

    void operator += (int x){

        s += x;
        if (s>=60){
            s-=60;
            m++;

            if(m>=60){
                m-=60;
                h++;

                if(h>=24){
                    h=0;
                }
            }
        }

    }

    void operator -= (int x){

        s -= x;
        if (s<0){
            s+=60;
            m--;
            if(m<0){
                m+=60;
                h--;
                if(h<0){
                    h=23;
                }
            }
        }

    }

    Time operator ++ (){
        Time temp;
        temp.s = ++s;
        temp.m = m;
        temp.h = h;
        return temp;

    }

    Time operator ++ (int ){
        Time temp;
        temp.s = s++;
        temp.m = m;
        temp.h = h;
        return temp;

    }

    Time operator -- (){
        Time temp;
        temp.s = --s;
        temp.m = m;
        temp.h = h;
        return temp;
    }

    Time operator -- (int ){
        Time temp;
        temp.s = s--;
        temp.m = m;
        temp.h = h;
        return temp;
    }
    void set_hour(int x){
        h=x;
    }

    void set_second(int x){
        s=x;
    }

    int get_hour(){
        return h;
    }

    int get_minute(){
        return m;
    }

    int get_second(){
        return s;
    }

};









int main()
{


Time t1;

cin>>t1;

cout<<t1<<endl;

Time t2(t1);

cout<<t2<<endl;

t2-=15;

cout<<t2<<endl;

cout<<--t2<<endl;

cout<<t2--<<endl;

cout<<t2<<endl;


t2+=40;

cout<<t2<<endl;

cout<<++t2<<endl;

cout<<t2++<<endl;

cout<<t2<<endl;

return 0;

}

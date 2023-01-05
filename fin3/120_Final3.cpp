#include <iostream>
using namespace std;

class Term {
public:

    Term (){
        coefficient=0;
        exponent=0;
    }

    void setTerm(int co, int e){
        coefficient=co;
        exponent=e;
    }

    void setc(int c){
        coefficient=c;
    }

    void sete(int e){
        exponent=e;
    }

    int getc(){
        return coefficient;
    }

    int gete(){
        return exponent;
    }

private:
	int coefficient;
	int exponent;
};

class Polynomial :public Term{

public:

    Polynomial (){
        term = new Term[50];
        maximum = 50;
    }

    Polynomial (int z){
        term = new Term[z];
        maximum = z;
    }

    ~Polynomial (){
        delete [] term;
    }

    Term *getTerm(){

        return term;
    }

    void print(){
        for (int i=maximum-1; i>=0; i++){
            if(i==0){
                cout << term[i].getc() << endl;
            }else
                cout << term[i].getc() << "x" << term[i].gete() <<" ";

        }
    }

    Polynomial operator + (Polynomial &p){
        Polynomial sum(maximum);

        for (int i=0; i<maximum; i++){
            sum.term[i].setc(term[i].getc() + p.term[i].getc());
            sum.term[i].sete(term[i].gete() + p.term[i].gete());
        }

        return sum;
    }


private:
	Term *term;
	int maximum;
};


int main()
{
	int firstm, secondm, i, tempCo;
	cin>>firstm;
	Polynomial firstPol(firstm);

	for(i=firstm; i>=0; i--)
	{
		cin>>tempCo;
		firstPol.getTerm()[i].setTerm(tempCo,i);
	}

	cin>>secondm;
	Polynomial secondPol(secondm);

	for(i=secondm; i>=0; i--)
	{
		cin>>tempCo;
		secondPol.getTerm()[i].setTerm(tempCo,i);

	}

	firstPol.print();
	secondPol.print();

	Polynomial addPol;
	addPol=firstPol+secondPol;
	addPol.print();

	return 0;
}


#include <iostream>
using namespace std;

#define ROWC 3
#define COLUMNC 11

class Grid
{
	friend istream& operator>>(istream& in, Grid &g)
	{
	    int x,y;
        in >> g.asteriskCount;
        for (int i=1; i<=g.asteriskCount; i++){
            in >> x >> y;
            g.m[x][y] = 1;
        }
        return in;
	}

	friend ostream& operator<<(ostream& out, Grid &g)
	{
        for(int r=0; r<3; r++){

            for(int c=0; c<11; c++){

                if(g.m[r][c]==1 || g.m[r][c]==2){
                    out << "*" ;
                }
                else{
                    out << " ";
                }
            }
            out << "\n";
        }

        return out;

	}

	public:

		int computeNumberOfBlobs(){
		    int count=0;
            for(int r=0; r<3; r++){

                for(int c=0; c<11; c++){

                    if(m[r][c]==1 || m[r][c]==2){
                        if((m[r][c+1]==1 || m[r][c+1]==2)
                           && (m[r+1][c]==1 || m[r+1][c]==2)){
                            m[r][c]=2;
                            m[r][c+1]=2;
                            m[r+1][c]=2;
                        }
                        else if(m[r][c+1]==1 || m[r][c+1]==2){
                            m[r][c]=2;
                            m[r][c+1]=2;
                        }else if(m[r+1][c]==1 || m[r+1][c]==2){
                            m[r][c]=2;
                            m[r+1][c]=2;
                        }
                        else if(m[r][c]!=2){
                            count+=1;
                        }

                    }

                }

            }

            for(int r=0; r<3; r++){

                for(int c=0; c<11; c++){
                    if(m[r][c]==2){
                        if((m[r][c+1]==2 && m[r][c+2]!=2
                                  && m[r+1][c]!=2 && m[r+1][c+1]!=2 )){
                            count+=1;
                        }else if(m[r][c+1]==2 || m[r][c-1]==2 || m[r+1][c]==2){

                        }
                        else{
                            count+=1;
                        }
                    }
                }
            }

            return count;
		}

	private:
		int asteriskCount;
		int m[ROWC][COLUMNC];
};



int main()
{
	Grid g1;

	cin>>g1;

	cout<<g1;

	cout<<g1.computeNumberOfBlobs()<<endl;

	return 0;
}


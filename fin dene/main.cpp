#include <iostream>
using namespace std;


class MagicSquare {
public:
    MagicSquare(int s = 3)
    {
        size = s;

    }

    void create()
    {


        int i = size/2;
        int j = size-1;
        for (int num = 1; num <= size*size; )
        {
            if (i == -1 && j == size)
            {
                j = size-2;
                i = 0;
            }
            else
            {

                if (j == size)
                    j = 0;

                if (i < 0)
                    i = size - 1;
            }
            if (ms[i][j])
            {
                j -= 2;
                i++;
                continue;
            }
            else {
                ms[i][j] = num++;
            }


            j++;
            i--;
        }



    }

    void print()
    {

        for (int i = size-1; i >= 0; i--)
        {
            for (int j = size-1; j >= 0; j--)
                cout<<ms[j][i]<<" ";
            cout<<endl;
        }

    }

private:
    int size;
    int ms[99][99];
};


int main()
{
    int n;


	cin>>n;

    MagicSquare m(n);

    m.create();

    m.print();

    return 0;
}

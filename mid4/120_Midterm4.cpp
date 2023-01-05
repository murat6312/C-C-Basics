#include <iostream>
using namespace std;

int main()
{

    int x, y, m, length = 0;
    cin >> x >> y;
    int a[50][50];


    for (int i = 0; i < x; i++) {
        for (m = 0; m < y; m++) {
            cin >> a[i][m] ;
        }

    }
    cout << endl;

    for (int i = 0; i < x; i++){
        for (m = 0; m < y; m++){
            if (a[i][m] > 0){
                a[length][0] = i;
                a[length][1] = m;
                a[length][2] = a[i][m];
                length++;
            }
        }
    }

    cout << x << " " << y << "\n" << length << endl;
    for (int i = 0; i < length; i++) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << "\n";
    }

    return 0;
}


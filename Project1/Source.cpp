#include<iostream>;
using namespace std;
int main() {
    double min, sum = 0;
    int k = 0;
    const int  n = 5;
    double a[n][n]{ {1.1,2.3,3.9,4.1,5.2}, {1.4,2.9,3.4,4.1,0.1} ,{1.4,2.8,3.2,4.7,5.6}, {1.2,2.3,3.7,4.8,5.9}, {1.4,2.8,3.3,4.7,5.9} };
    min = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < min) {
                min = a[i][j];
                k = i;
            }
        }

    }

    for (int i = 0; i < n; i++)
    {
        sum += a[k][i];
    }
    cout << "sum=" << sum;
    return 0;
}
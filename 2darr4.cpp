#include <iostream>
using namespace std;
int main()
{
    //int n, m;
    //cin >> n >> m;
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}
    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    */
   int i=0,j=0;
    for (i; i < 3; i++)
    {
        for (j; j < 3; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout << a[1][0];
    return 0;
}
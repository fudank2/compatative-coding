#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<n; i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n; i++)
    {
        for(int j =0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
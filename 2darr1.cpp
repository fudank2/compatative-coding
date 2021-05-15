#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n,search;
    cin>>m>>n>>search;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp_search =a[i][j];
            if(temp_search == search)
            {
                cout<<" ok i got value , you entered"<<endl;
                break;
            }
            else if(i==m-1 && j==n-1 && a[m][n] !=search){
                cout<<" sorry we havent got element";
                break;
            }
        }
    }
    return 0;
}
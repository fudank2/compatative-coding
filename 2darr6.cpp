#include<iostream>
using namespace std;
// we have to check palindrom of word
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check = 1;
    
    for(int i=0;i<n;i++)
    {
        if(a[i] != a[n-1-i]){
            check=0;
            break;
        }
        
    }
    if(check == true){
        cout<<" word is palidrom";
    }
    else
    {
        cout<<" word is not palindrom";
    }
    
    return 0;

}





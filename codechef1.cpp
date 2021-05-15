#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float m;
    cin >> n >> m;
    float k = n + .5;
    float leftAmount = m;
    if (n % 5 ==0 && k<m)
    {
        leftAmount = leftAmount - k;
        cout << fixed << setprecision(2) << leftAmount;
    }
    else
    {
        cout << fixed << setprecision(2) << leftAmount;
    }
    return 0;
}
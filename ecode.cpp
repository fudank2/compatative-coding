#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int withdraw;
	float cash;
	cin>>withdraw;
	cin>>cash;
	if(withdraw%5==0 && cash >= withdraw + 0.50)
	{
	    cash = cash -withdraw - 0.50;
	    
	}
	cout<<fixed<<setprecision(2)<<cash;
	return 0;
}


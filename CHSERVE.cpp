#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
// Problem Statement - https://www.codechef.com/problems/CHSERVE
int main() {
	int t;
	cin>>t;
	int p1, p2, k;
	int a, b, c;
	for(int i = 0; i < t; i++){
	    cin>>p1>>p2>>k;
	    a = p1 + p2;
	    b = a / k;
	    c = b % 2;
	    if(c != 1){
	        cout<<"CHEF"<<"\n";
	    }
	    else if(c = 1){
	        cout<<"COOK"<<"\n";
	    }
	}
	return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, p, q;
	bool b;
	cin >> t;
	for(int i = 0; i < t; ++i){
	    cin >> n;
	    b = true;
	    p = 0;
	    q = 0;
	    for(int j = 0; j < n; ++j){
	        cin >> a;
	        if(a == 1){
	            p++;
	        }
	        else{
	            q++;
	        }
	        if(q > p){
	            b = false;
	        }
	    }
	    if(b){
	        cout << "Valid" << "\n";
	    }
	    else{
	        cout << "Invalid" << "\n";
	    }
	}
	return 0;
}

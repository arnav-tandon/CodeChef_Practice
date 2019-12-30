#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/BIT2A
int main() {
	int t;
	cin>>t;
	vector<int> arr;
	int n;
	int k;
	int ans = 0;
	for(int i = 0; i < t; i++){
	    cin>>n;
	    for(int j = 0; j < n;j++){
	        cin>>k;
	        arr.push_back(k);
	    }
	    for(int q = 0; q<n; q++){
	        int e = arr[q];
	        for(int q2 = 0; q2<n; q2++){
	            int f = arr[q2];
	            if(f > e){
	                ans++;
	            }
	        }
	        cout<<ans<<" ";
	        ans = 0;
	    }
	    cout<<"\n";
	    arr.clear();
	}
	
	return 0;
}

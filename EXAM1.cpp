#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n;
	string corr;
	string str;
	int score;
	char x, y;
	char a = 'N';
	for(int i = 0; i < t; ++i){
	    cin >> n >> corr >> str;
	    for(int j = 0; j < n; ++j){
	        x = corr[j];
	        y = str[j];
	        if(x == y){
	            score++;
	        }
	        else{
	            if(y != a){
	                str[j + 1] = 'N';
	            }
	        }
	    }
	    cout << score << "\n";
	    score = 0;
	}
	return 0;
}

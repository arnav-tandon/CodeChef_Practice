#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a;
	int z = 0;
	for(int i = 0; i < t; ++i){
	    for(int j = 0; j < 100; ++j){
	        cin >> a;
	        if(a <= 30){
	            z++;
	        }
	    }
	    if(z >= 60){
	        cout << "yes" << "\n";
	    }
	    else{
	        cout << "no" << "\n";
	    }
	    z = 0; 
	}
	return 0;
}

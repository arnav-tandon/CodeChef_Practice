#include <iostream>
using namespace std;

int main() {
	int t, n, a, b, x;
	cin >> t;
	for(int i = 0; i < t; ++i){
	    cin >> n >> a >> b;
	    double a_cnt = 0;
	    double b_cnt = 0;
	    for(int j = 0; j < n; ++j){
	        cin >> x;
	        if(x == a){
	            ++a_cnt;
	        }
	        if(x == b){
	            ++b_cnt;
	        }
	    }
	    double y = ((double)(a_cnt / n));
	    double z = ((double)(b_cnt / n));
	    double ans = y * z;
	    cout << ans << "\n";
	}
	return 0;
}

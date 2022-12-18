#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    double a,b;cin>>a>>b;
	    if((a*107)/100 < b) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}

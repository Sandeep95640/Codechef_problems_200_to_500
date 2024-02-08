#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    int m;
	    cin>>n>>m;
	    if(m>=n){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<n-m<<endl;
	    }
	}
	return 0;

}

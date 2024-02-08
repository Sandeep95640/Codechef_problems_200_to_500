#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if((x+y)<=(a+b)){
	        cout<<x+y<<endl;
	    }
	    else{
	        cout<<a+b<<endl;
	    }
	}

}

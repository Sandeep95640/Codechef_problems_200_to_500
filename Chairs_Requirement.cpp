#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    int y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<x-y<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;

}

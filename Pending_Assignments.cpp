#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x*y<=z*24*60){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    if((3*x)<=(y*2)){
	        cout<<3*x<<endl;
	    }
	    else{
	        cout<<y*2<<endl;
	    }
	}

}

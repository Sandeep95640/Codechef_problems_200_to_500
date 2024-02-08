#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    int d=x-y;
	    if(d<0){
	        cout<<-1*d<<endl;
	    }
	    else{
	        cout<<d<<endl;
	    }
	}
	return 0;
}

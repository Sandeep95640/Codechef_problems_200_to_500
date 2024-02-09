#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int total_people=x*10;
	    if((x*10>y)){
	        cout<<z*y<<endl;
	    }
	    else{
	        cout<<(y-(y-x*10))*z<<endl;
	    }
	}

}

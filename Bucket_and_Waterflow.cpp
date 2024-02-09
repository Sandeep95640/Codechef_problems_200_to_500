#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(x-w<y*z){
	        cout<<"overFlow"<<endl;
	    }
	    else if(x-w==y*z){
	        cout<<"filled"<<endl;
	        
	    }
	    else{
	        cout<<"Unfilled"<<endl;
	    }
	}


}

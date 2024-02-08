#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    cin>>x;
	    if(x>=7){
	        cout<<"HOT"<<endl;
	    }
	    else if(x<4){
	        cout<<"MILD"<<endl;
	    }
	    else{
	        cout<<"MEDIUM"<<endl;
	    }
	}

}

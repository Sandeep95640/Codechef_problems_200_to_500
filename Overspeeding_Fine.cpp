#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    cin>>x;
	    if(x>100){
	        cout<<2000<<endl;
	    }
	    else if(x<=70){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<500<<endl;
	    }
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    cin>>x;
	    if(x>1000){
	        {
	            int s=(x*0.1);
	            cout<<s<<endl;
	        }
	    }
	    else{
	        cout<<100<<endl;
	    }
	}

}

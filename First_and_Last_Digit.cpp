#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int ld=n%10;
	    int fd=0;
	    while(n!=0){
	        fd=n%10;
	        n=n/10;
	    }
	    cout<<fd+ld<<endl;
	}
}

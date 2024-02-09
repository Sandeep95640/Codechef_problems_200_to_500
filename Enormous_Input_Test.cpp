
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
	cin>>t>>k;
	int count=0;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if(n%k==0){
	        count++;
	    }
	}
	cout<<count;
    return 0;
}

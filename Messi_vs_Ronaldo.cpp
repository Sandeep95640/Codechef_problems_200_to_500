#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int ro=2*x+y;
	int mess=2*a + b;
	if(ro>mess){
	    cout<<"Ronaldo";
	}
	else if(ro==mess){
	    cout<<"Equal"<<endl;
	}
	else{
	    cout<<"Messi"<<endl;
	}
	return 0;

}

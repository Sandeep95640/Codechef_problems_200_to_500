#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        if(x>n){
            cout<<0<<endl;
        }
        else{
            cout<<(n/x)/3<<endl;
        }
    }
    return 0;
}
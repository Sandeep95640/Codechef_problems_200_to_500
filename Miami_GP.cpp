#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X,Y;
        cin>>X>>Y;
        double thresholdTime = 1.07 * X;
        if (Y <= thresholdTime) {
           cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}

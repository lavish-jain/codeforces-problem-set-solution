#include<iostream>
using namespace std;

bool isLucky(int n) {
    while(n>0) {
        if(n%10!=4 && n%10!=7)
            return false;
        n = n/10;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    string out = "NO";
    if(isLucky(n))
        out = "YES";
    else {
        for(int i=2;i*i<=n;i++) {
            if(n%i==0 && (isLucky(i)||isLucky(n/i))) {
                out = "YES";
                break;
            }
        }
    }
    cout<<out;
    return 0;
}
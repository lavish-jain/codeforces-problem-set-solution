#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string out = s;
    bool flag = true;
    for(int i=1;flag && i<out.length();i++) {
        if((islower(out[0]) && islower(out[i]))||(isupper(out[0]) && islower(out[i])))
            flag = false;
    }
    if(flag || out.length()==1) {
        for(int i=0;i<out.length();i++) {
            out[i] = islower(out[i])?toupper(out[i]):tolower(out[i]);
        }
    }
    cout<<out;
}
#include<iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string out = "NO";
    for(int i=0;i<s.length();i++) {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9') {
            out="YES";
            break;
        }
    }
    cout<<out;
}
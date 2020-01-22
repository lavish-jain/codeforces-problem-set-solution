#include<iostream>
#include<cmath>
using namespace std;

int main() {
    unsigned long long int n, m, a;
    cin>>n>>m>>a;
    unsigned long long int req_flagstones = ceil((double) n/a) * ceil((double)m/a);    
    cout<<req_flagstones;
    return 0;
}
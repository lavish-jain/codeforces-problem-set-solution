#include<iostream>
using namespace std;

int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int n;
    cin>>n;
    int counts[4] = {0};
    int t;
    for(int i=0;i<n;i++) {
        cin>>t;
        counts[t-1]++;
    }
    int taxi = counts[3];
    counts[3] = 0;
    int mini = min(counts[0], counts[2]);
    taxi += mini;
    counts[0] -= mini;
    counts[2] -= mini;
    taxi += counts[2];
    counts[2] = 0;
    taxi += counts[1]/2;
    counts[1] -= (counts[1]/2)*2;
    taxi += counts[0]/4;
    counts[0] -= (counts[0]/4)*4;
    if(counts[1]==1) {
        taxi += 1;
        counts[1] = 0;
        if(counts[0]>=2)
            counts[0] -= 2;
        else if(counts[0]==1)
            counts[0] -= 1;
    }
    taxi += counts[0]>0?1:0;
    counts[0] = 0;
    cout<<taxi;
    return 0;
}
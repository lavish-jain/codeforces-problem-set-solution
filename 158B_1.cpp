#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int grps[n];
    bool done[n] = {false};
    for(int i=0;i<n;i++)
        cin>>grps[i];
    sort(grps, grps+n, greater<int>());
    int taxi = 0;
    for(int i=0;i<n;i++) {
        if(done[i])
            continue;
        done[i] = true;
        int num = grps[i];
        for(int j = i+1;j<n&&4-num>0;j++){
            if(done[j])
                continue;
            if(num+grps[j]<=4) {
                num += grps[j];
                done[j] = true;
            }
            if(num==4)
                break;
        }
        taxi++;
    }
    cout<<taxi;
}
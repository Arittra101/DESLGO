#include <bits/stdc++.h>
using namespace std;
     
int main() {
    
    int n;
    cin>>n;
    vector<int>v;
    int mx = INT_MIN;
    int i=0,j=0;
    while(j<n)
    {
        if(v[j]==0)
        {

            j=i;
        }
        else if(v[j]==1)
        {
            j++;
        }
        int ds = abs(i-j)+1;
        mx = abs(ds-mx);
    }

    cout<<mx<<endl;
    return 0;
}
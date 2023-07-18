
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pq_mn  priority_queue<lli,vector<lli>,greater<lli>>
#define pq_mx priority_queue<int> pq;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve()
{
    vi v{1,2,3,2,0,0,0,3,4,0,0,1};
    int i=0,j=1;

    if(v.size()==1)
    {
        return ;
    }

    while(j<v.size())
    {
        if(v[i]==0 && v[j]!=0)
        {
            swap(v[i],v[j]);
            i++;
            j++;
            continue;

        }
        else if(v[i]==0 && v[j]==0)
        {
            j++;
            continue;
        }
        i++,j++;
        cout<<i<<" "<<j<<endl;
    }
    for(auto it : v)cout<<it<<" ";
}
int main()
{

    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}





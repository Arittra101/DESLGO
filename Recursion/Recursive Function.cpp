
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli j;

#define pq_mn  priority_queue<lli,vector<lli>,greater<lli>>
#define pq_mx priority_queue<int> pq;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back

#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"
set<string>st;
map<lli,lli>mp;
lli Recursive_Function(lli n)
{

    lli sm;
    if(n==0) return 1;



    if(mp[n]==0)
    {
        sm =  Recursive_Function(n/2)+Recursive_Function(n/3);
        mp[n]=sm;
    }
    else sm = mp[n];

    return sm;

}

void solve()
{
    lli n;
    cin>>n;

    cout<<Recursive_Function(n)<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();


    return 0;
}






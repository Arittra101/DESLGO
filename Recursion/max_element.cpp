#include<bits/stdc++.h>
using namespace std;
typedef long long int llli;
typedef double lli;
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

int find_max(vi v,int start)
{
    if(start>=v.size())
    {
        return INT_MIN;
    }
    return (v[start]>=find_max(v,start+1))?  v[start] : find_max(v,start+1);

}

void solve()
{
    vi v = {10,2,19,5,16};
    cout<<find_max(v,0)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;

        solve();


    return 0;
}

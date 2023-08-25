
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


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
set<string>st;

lli fact(lli n)
{
    if(n==1 || n==0)
    {
        return 1;
    }

    return  n*fact(n-1);
}

void solve()
{
   lli n;
   cin>>n;
   cout<<fact(n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();


    return 0;
}





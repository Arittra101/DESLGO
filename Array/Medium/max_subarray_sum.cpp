
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
    vi v{5,4,-1,7,8};


    lli mxSum = v[0];

    lli crnt_Sm = v[0];


    for(i=1;i<v.size();i++)
    {
        crnt_Sm+=v[i];

        if(crnt_Sm<=v[i])
        {
            crnt_Sm = v[i];

        }
        mxSum = max(crnt_Sm,mxSum);
    }
    cout<<mxSum;


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





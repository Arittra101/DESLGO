
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

set<vector<lli>>s;
void generate_subset(vector<lli>subset,int i,vector<lli>vect)
{
    if(i==vect.size())
    {
        s.insert(subset);
        return;
    }

    subset.pb(vect[i]);
    generate_subset(subset,i+1,vect);  //I AM TAKING ELEMENT
    subset.pop_back();
    generate_subset(subset,i+1,vect); //NOT TAKING ELELMENT



}




void solve()
{
   vi vect{1,2,3},empty;
   generate_subset(empty,0,vect);
   for(auto it : s)
    {
        for(auto it1 :  it) cout<<it1<<" ";
        cout<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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





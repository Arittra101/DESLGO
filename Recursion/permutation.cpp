
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
void string_permutation(string s,map<char,int>&used,string permutation)
{
    if(s.size()==permutation.size())
    {
        st.insert(permutation);
        return;
    }

    for(int i=0;i<s.size();i++)
    {
        if(used[s[i]]!=1)
        {
            used[s[i]]=1;
            permutation.push_back(s[i]);

            string_permutation(s,used,permutation);

            permutation.pop_back();
            used[s[i]]=0;
        }
    }

}

void solve()
{
   string s,permutation;
   cin>>s;

   map<char,int>used;

   string_permutation(s,used,permutation);
   for(auto it :  st)cout<<it<<endl;
   cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        solve();


    return 0;
}





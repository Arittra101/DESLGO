
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
set<string>s;


void generate_substring(string subStr,lli i,string str)
{

    if(i==str.size())
    {
        s.insert(subStr);
        return;
    }

    subStr.pb(str[i]);
    generate_substring(subStr,i+1,str);
    subStr.pop_back();
    generate_substring(subStr,i+1,str);

}


void solve()
{
    string str;
    cin>>str;
    string subStr;
    generate_substring(subStr,0,str);

     for(auto it :  s)
    {
        if(it.size()!=0)
        cout<<it<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();


    return 0;
}





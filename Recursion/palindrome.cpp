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


bool find_palindrome(string str, int start,int en)
{
    //cout<<start<<" "<<en-start<<endl;
    if(start>=en-start)
    {
        cout<<start<<" "<<en-start<<endl;
        return true;
    }

    if(str[start]!=str[en-start])
    {
        //cout<<start<<" "<<en-start<<endl;
        return false;

    }


    return find_palindrome(str,start+1,str.size()-1);
}

void solve()
{
    string str = "racecar";
    if(find_palindrome(str,0,str.size()-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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


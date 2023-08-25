
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define pq_mn priority_queue<lli, vector<lli>, greater<lli>>
#define pq_mx priority_queue<int> pq;
#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back

#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"

void solve()
{
    int n,i,target;
    cin >> n;
    cin >> target;

    vector<int> v;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
  
    for (int i = 0; i < v.size(); i++)  mp[v[i]] = i + 1;
 
    for (i = 0; i < v.size(); i++)
    {
        int ans = target - v[i];
        if (mp[ans] != 0 && i + 1 < mp[ans])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main()
{

    solve();

    return 0;
}

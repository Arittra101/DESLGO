
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
const lli N = 1e3+10;
vi visited(N,0);
vector<lli>graph[N];
vi subtree_sum(N,0);

/*

    Given Q queries ,Q<=10^5
    in each query given V,
    print subtree sum of v and number of even numbers
    in subtree of v


*/
int DFS_SUBTREE_SUM(lli node)
{

    lli node_sum=0;
    visited[node]=1;
    subtree_sum[node]=node;
    for(auto child:graph[node])
    {
        if(visited[child]!=1)
        {
            subtree_sum[node]+=DFS_SUBTREE_SUM(child);
        }
    }
    return subtree_sum[node];

}

void solve()
{
    lli node,edge;
    cin>>node>>edge;

    for(i=0; i<edge; i++)
    {
        lli node1,node2;
        cin>>node1>>node2;
        graph[node1].pb(node2);
        graph[node2].pb(node1);
        //cout<<node1<<node2<<endl;
    }

    lli root = 1;
    DFS_SUBTREE_SUM(root);

    for(i=0; i<node; i++)
    {
        cout<<i+1<<" ";
    }
    cout<<endl;
    for(i=0; i<node; i++)
    {
        cout<<subtree_sum[i+1]<<" ";
    }

//    for(i=0; i<edge; i++)
//    {
//        cout<<i<<endl;
//        for(auto it : graph[i])
//        {
//            DFS(it);
//        }
//        cout<<endl;
//    }
//    cout<<graph[3].size()<<endl;
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






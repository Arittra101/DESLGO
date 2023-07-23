
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

const lli N = 1e5+10;

vector<lli>graph[N];
map<lli,lli>depth;
map<lli,lli>height;
lli visited[N];

lli DFS(lli node,lli Predepth)
{


    visited[node]=1;
    depth[node]=1+Predepth;

    lli height_from_child=INT_MIN;

    for(auto child : graph[node])
    {
        if(!visited[child])
        {
            DFS(child,depth[node]);
            height_from_child=DFS(child,depth[node]);
            height[node] = max(height[node],height_from_child);
        }
        else continue;

    }
     return 1+height[node];




}

void solve()
{

    cout<<"Enter the number of node and edge"<<endl;
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


    lli root=1;
    depth[root]=-1;
    visited[root]=1;
    DFS(root,depth[root]);


    cout<<"Depth of the nodes "<<endl;
    for(i=1; i<=node; i++)
    {
        cout<<depth[i]<<" ";
    }
    cout<<endl;

    cout<<"Height of the nodes "<<endl;
    for(i=1; i<=node; i++)
    {
        cout<<height[i]<<" ";
    }



}
int main()
{


    solve();

    return 0;
}



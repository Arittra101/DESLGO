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
lli visited[N];

bool DFS(lli node,lli par)
{
//    if(visited[node]) return node;



    // cout<<node<<" ";
    lli loopIngraph = false;
    visited[node]=1;
    for(auto child :  graph[node])
    {
        if(visited[child] && child ==par) continue;   // check if visited -> continue

        else if(visited[child] && child!=par) return true;  //yes there is a loop


        //if(visited[child]!=0)
        loopIngraph|=DFS(child,node);
    }

    return loopIngraph;
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
    lli component=0;
    lli loopIngraph = false;
    for(i=1; i<=node; i++)
    {
        if(!visited[i])
        {
            component++;
            loopIngraph|=DFS(i,0);
        }
    }
    if(loopIngraph)
        cout<<"there is a cycle"<<endl;

    else cout<<"There is no loop"<<endl;

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


    //cout<<"Case "<<l<<": ";
    solve();


    return 0;
}

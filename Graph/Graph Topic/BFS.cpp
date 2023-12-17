
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
lli N = 14;


void BFS()
{


    lli node;
    cout<<"Enter the number of node "<<endl;
    cin>>node;
    lli edge;
    cout<<"Enter the number of edge "<<endl;
    cin>>edge;

    vector<lli>graph[node+1];
    vector<lli>visited(node+1,0);
    queue<lli>q;


    for(i=0; i<edge; i++)
    {
        lli n1,n2;
        cin>>n1>>n2;
        graph[n1].pb(n2);
        graph[n2].pb(n1);
    }



//    visualization of graph node
    for(i=1;i<node;i++)
    {  // cout<<i<<"-> ";
        for(auto it : graph[i])cout<<it<<" ";
      //  cout<<endl;
    }



    q.push(1);
    while(!q.empty())
    {

        lli nd = q.front();
        cout<<nd<<" ";
        q.pop();
        visited[nd] = 1;

        for(auto it : graph[nd])
        {

            if(visited[it]!=1)
            {
                q.push(it);
            }

        }

    }
}
int main()
{


    BFS();


    return 0;
}





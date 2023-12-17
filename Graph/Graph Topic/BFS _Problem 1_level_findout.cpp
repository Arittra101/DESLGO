




                                            /*Given an undirected graph with V vertices and E edges and a node X,
                                             The task is to find the level of node X in the undirected graph
                                            . If X does not exist in the graph then return -1*/



#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;


void bfs(){

    lli node,edge;
    cout<<"Enter the node and edge"<<endl;
    cin>>node>>edge;
    vector<lli>graph[node+1];
    vector<lli>visited(node+1,0);
    vector<lli>level(node+1,0);

    queue<lli>q;

    //input in graph

    for(int i=0;i<edge;i++){
        lli n1,n2;
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    lli x;
    cout<<"Enter the node to findout the level "<<endl;
    cin>>x;

    //by default starting point of the traverse
    q.push(1);
    level[1]+=1;
    while(!q.empty()){

        lli nd = q.front();
        q.pop();

        visited[nd]=1;

        for(auto it : graph[nd]){
            if(visited[it]!=1){
                q.push(it);
                level[it] = level[nd]+1;
            }
        }

    }

    cout<<x<<"node level is "<<level[x]<<endl;
}






int main(){

bfs();

}

/*
input
14
13
1 2
2 3
3 4
2 6
3 5
6 7
6 8
1 9
9 10
9 11
11 12
11 13
13 14
*/






#include<bits/stdc++.h>
using namespace std;
typedef int lli;


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
void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& visited,vector<vector<int>>&count_end,vector<int>&v)
{


    int  col = grid[0].size();
    int row = grid.size();


    if(i<0 || j<0) return;
    if(i>=row || j>=col) return;

    if(grid[i][j]==0) return;

    if(visited[i][j]==1) return;


    if(i+1==row) v[0]++;
    else if(grid[i+1][j]==0) v[0]++;

    if(i-1==-1) v[0]++;
    else if(grid[i-1][j]==0) v[0]++;


    if(j+1==col) v[0]++;
    else if(grid[i][j+1]==0) v[0]++;

    if(j-1==-1) v[0]++;
    else if(grid[i][j-1]==0) v[0]++;

   // cout<<"D";
    visited[i][j]=1;
    dfs(i+1,j,grid,visited,count_end,v);
    dfs(i-1,j,grid,visited,count_end,v);
    dfs(i,j+1,grid,visited,count_end,v);
    dfs(i,j-1,grid,visited,count_end,v);
}
int islandPerimeter(vector<vector<int>>& grid)
{


    vector<vector<int>> count_end(grid.size(),vector<int>(grid[0].size(),0));
    vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(),0));
    vi v(1,0);
    for(int i=0; i<grid.size(); i++)
    {
        for(int j=0; j<grid[i].size(); j++)
        {

            if(grid[i][j]==1 && visited[i][j]!=1)
            {
                dfs(i,j,grid,visited,count_end,v);
            }
        }
    }
    cout<<v[0]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

//    vector<vector<int>> grid =
//    {
//        {0,1,0,0},
//        {1,1,1,0},
//        {0,1,0,0},
//        {1,1,0,0}
//
//
//    };
    vector<vector<int>> grid =
    {
        {0,0,1,1},
        {0,1,1,1},
        {0,1,1,1},
        {0,0,0,1}


    };
    islandPerimeter(grid);


    return 0;
}








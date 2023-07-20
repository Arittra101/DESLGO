
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

void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& visited)
{

    if(i<0 || j<0) return;
    if(i>=grid.size() || j>=grid[0].size()) return;
    if(visited[i][j]==1 || grid[i][j]=='0') return;
   // cout<<i<<" "<<j<<endl;
    visited[i][j]=1;
    dfs(i+1,j,grid,visited);
    dfs(i-1,j,grid,visited);
    dfs(i,j+1,grid,visited);
    dfs(i,j-1,grid,visited);

}
int numIslands(vector<vector<char>>& grid)
{
    int cnt=0;
    vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(),0));
    for(int i=0; i<grid.size(); i++)
    {
        for(int j=0; j<grid[i].size(); j++)
        {

            if(visited[i][j]!=1 && grid[i][j]!='0')
            {
                cnt++;
                dfs(i,j,grid,visited);
            }
        }
    }
    cout<<cnt<<endl;
   // return cnt;
//    for (int i = 0; i < visited.size(); i++)
//    {
//        for (int j = 0; j < visited[i].size(); j++)
//        {
//            cout << visited[i][j] << " ";
//        }
//        cout << endl;
//    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<char>> grid =
    {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}


    };
    numIslands(grid);


    return 0;
}






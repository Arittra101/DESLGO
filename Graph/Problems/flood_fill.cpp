
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

void dfs(int i,int j,int initColor,int newColor,vector<vector<int>>& image,vector<vector<int>>& image1)
{
    //cout<<i-1<<" "<<j<<" "<<image[i].size()<<" "<<image[i-1][j]<<" "<<initColor<<endl;
    cout<<i<<" "<<j<<endl;
    if(i+1<image.size() && image[i+1][j]==initColor && image1[i+1][j]!=1)
    {
        image[i+1][j]=newColor;
        image1[i+1][j]=1;

        // cout<<i+1<<" "<<j<<endl;
        dfs(i+1,j,initColor,newColor,image,image1);
    }
    if(i-1>=0 && image[i-1][j]==initColor && image1[i-1][j]!=1)
    {
        //cout<<i-1<<" "<<j<<endl;
        image[i-1][j]=newColor;
         image1[i-1][j]=1;
        dfs(i-1,j,initColor,newColor,image,image1);
    }
    if(j+1<image[i].size() && image[i][j+1]==initColor && image1[i][j+1]!=1)
    {
        //cout<<i<<" "<<j+1<<endl;
        image[i][j+1]=newColor;
         image1[i][j+1]=1;
        dfs(i,j+1,initColor,newColor,image,image1);
    }
    if(j-1>=0 && image[i][j-1]==initColor &&image1[i][j-1]!=1)
    {
        // cout<<i<<" "<<j-1<<endl;
        image[i][j-1]=newColor;
         image1[i][j-1]=1;
        dfs(i,j-1,initColor,newColor,image,image1);
    }
    return;
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
{


   // vector<vector<int>>image1 = image;
    //image1[sr][sc]=color;

    vector<vector<int>>image1(image.size(),vector<int>(image[0].size(),0));
    image1[sr][sc]=1;
    int initColor = image[sr][sc];
    image[sr][sc]=color;

   // image[sr][sc]=color;
    dfs(sr,sc,initColor,color,image,image1);

    // map<int,int>mp;
    // for(int i=0;i<image.size();i++){

    //     for(int j=0;j<image[i].size();j++)
    //     {
    //         if(mp[image[i][j]]!=1)
    //         {
    //             dfs(i,j,image[i][j],color);
    //         }
    //     }
    // }
    for (int i = 0; i < image1.size(); i++)
    {
        for (int j = 0; j < image1[i].size(); j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    return image;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        vector<vector<int>> image =
    {
        {0, 0, 0},
        {0, 1, 0},

    };
floodFill(image,1,1,2);
//    vector<vector<int>> image =
//    {
//        {1, 1, 1},
//        {1, 1, 0},
//        {1, 0, 1}
//
//    };
//    floodFill(image,1,1,2);


    return 0;
}





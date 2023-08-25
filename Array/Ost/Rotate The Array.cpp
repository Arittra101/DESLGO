#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (k == 0)
    {
        cout<<v[n-1]<<" ";
        for(int i=0;i<n-1;i++)cout<<v[i]<<" ";
    }
    else {

        for(int i=1;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[0]<<endl;
    }

    return 0;
}
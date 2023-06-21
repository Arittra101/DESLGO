#include <bits/stdc++.h>
using namespace std;
typedef long long int llli;
typedef double lli;
lli i, j;

#define pq_mn priority_queue<lli, vector<lli>, greater<lli>>
#define pq_mx priority_queue<int> pq;
#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"

void insertion_sort()
{

    vi v{9,2,6,4,8,5,1,9,8};


    for(i=1;i<v.size();i++)
    {
        j = i;
        while(j>0 && v[j]>v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
    }

    for(i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

}
int main()
{

    lli t, l = 0;

    insertion_sort();

    return 0;
}




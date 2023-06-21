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

void selection_sort()
{

    vi v{9,3,2,1,10,5,5,15,1,2};

    lli mn;
    for(i=0; i<v.size()-1; i++) //last element is automatic sorted
    {
        mn = i;  //let assume our first index in each iteration is small
        for(j=i; j<v.size(); j++)
        {
            if(v[mn]>v[j])
            {
                //cout<<v[mn]<<" 1st"<<v[j]<<endl;
                mn = j;  //if small then we insert min index value to min
                //cout<<v[mn]<<" 2nd "<<v[j]<<endl;
            }
        }

        // after first iteration the we get the min value for the first index.
        //now swap first index value with minimum value

        swap(v[i],v[mn]);
        //cout<<v[mn]<<" 3rd "<<v[j]<<endl;

    }
    // swap(v[0],v[4]);
    for(auto it : v)
    {
        cout<<it<<" ";
    }

}
int main()
{

    lli t, l = 0;

    selection_sort();

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


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

void merge(vector<lli>&arr,lli low,lli mid,lli high)
{

    lli left = low;
    lli right = mid+1;
    vi temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.pb(arr[left]);
            left++;
        }
        else
        {

            temp.pb(arr[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.pb(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.pb(arr[right]);
        right++;
    }


    for(lli i=low; i<=high; i++)
    {
        arr[i]=temp[i-low];
    }

}

void merge_sort(vector<lli>&arr,lli low,lli high)
{
    if(low>=high) return;

    lli mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);


}
int main()
{

    lli t, l = 0;

    vi v{7,8,9,2,1,4};
    merge_sort(v,0,v.size()-1);
    for (int i = 0; i < v.size()-1; i++)
    {
        cout << v[i] << " "  ;
    }
    return 0;
}




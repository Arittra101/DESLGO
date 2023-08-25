int Solution::perfectPeak(vector<int> &v) {

      int n = v.size();
    vector<int> mxV(n,0);
    int mx = v[0];
    mxV[0]=mx;

    for(int i=1; i<n; i++)
    {
        if(v[i]>mx)
        {
            mx = v[i];
            mxV[i] = mx;
        }
        else
        {
            mxV[i]=mx;
        }

    }
    int  mn = v[n-1];
    vector<int>  mnV(n,0);

    mnV[n-1]=mn;
    int cnt=1;
    for(int i=n-2; i>=0; i--)
    {
        if(v[i]<mn)
        {
            mn = v[i];
            mnV[i] = mn;
        }
        else
        {
            mnV[i]=mn;
        }

    }


    for(int i=1;i<n-1;i++)
    {
        if(v[i]>mxV[i-1] && v[i]<mnV[i+1]){
            return 1;
        }

    }
//    for(auto it :  mxV) cout<<it<<" ";
//    cout<<endl;
//    for(auto it : mnV) cout<<it<<" ";

        return 0;

}


int sockMerchant(int n,vector<int> ar)
{
    int count=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[ar[i]]++;
    }
    for(auto x:mp)
    {
        count=count+x.second/2;
    }
    return count;
}
int jumpingOnClouds(vector<int> c)
{
    int count=0;
    for(int i=0;i<c.size(),i++)
    {
        if(i+2<c.size() and !c[i+2])
        {
            count++;
            i++;
        }
        else if(i+1<c.size() and !c[i+1])
        {
            count++;
        }
    }
    return count;
}
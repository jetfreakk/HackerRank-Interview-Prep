int countValleys(int n,string s)
{
    int upd=0,result=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U')
        upd++;
        else
        {
        upd--;
        }
        if(upd==0 and s[i]=='U')
        result++;
    }
    return result;
}
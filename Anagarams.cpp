*/
bool isAnagram(string c, string d){
    
    // Your code here
    if(c.size()!=d.size())
        return false;
    unordered_map<char,int>mp;
    for(int i=0;i<c.size();i++)
    {
        mp[c[i]]++;
    }
    int i;
    for(i=0;i<d.size();i++)
    {
        if(mp.find(d[i])!=mp.end())
        {
            if(mp[d[i]]==1)
                mp.erase(d[i]);
            else if(mp[d[i]]>1)
                mp[d[i]]--;
        }
    }
    if(i<d.size()||mp.size()>0)
        return false;
    else
        return true;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool isAnagram(string c, string d){
    
    // Your code here
    if(c.size()!=d.size())
        return false;
    int count=0;
    for(int i=0;i<c.size();i++)
        count+=c[i];
    for(int i=0;i<d.size();i++)
        count-=d[i];
    if(count==0)
        return true;
    else
        return false;
}

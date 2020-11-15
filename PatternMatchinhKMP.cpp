void LPS(string s,int lps[], int m)
    {
        lps[0]=0;
        int i=1;
        int len=0;
        while(i<m)
        {
            if(s[len]==s[i])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len>0)
                    len=lps[len-1];
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(m==0)
            return 0;
        
        int lps[m];
        LPS(needle,lps,m);
        int i=0,j=0,si=-1;
        
        while(i<n)
        {
            if(haystack[i]==needle[j])
            {

                i++;
                j++;
            }
            if(j==m)
            {
                si=i-j;
                break;
            }
            else if(i<n && haystack[i]!=needle[j])
            {
                if(j!=0)
                    j=lps[j-1];
                else
                    i++;
            }
        }
        
        return si;
    }

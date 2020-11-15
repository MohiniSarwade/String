int lps(string s)
	{
	    // Your code goes here
	    int m=s.length();
	    int i=1,len=0;
	    int tmp[m];
	    tmp[0]=0;
	    while(i<m)
	    {
	        if(s[i]==s[len])
	        {
	            len++;
	            tmp[i]=len;
	            i++;
	        }
	        else
	        {
	            if(len>0)
	                len=tmp[len-1];
	            else
	             {
	                 tmp[i]=0;
	                 i++;
	             }
	                
	        }
	    }
	    return tmp[m-1];
	}

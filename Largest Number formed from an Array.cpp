	static bool comp(string s1, string s2)
	{
	    return s1+s2>s2+s1;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),comp);
	    string res="";
	    for(int i=0;i<arr.size();i++)
	        res+=arr[i];
	    return res;
	}

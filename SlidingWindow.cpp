/*#include<bits/stdc++.h>

using namespace std;
// Maximum Sum Subarray of size K | Sliding Window
int main()
{
    int n,k;
    cin>>n>>k;
    int i;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    int j=0,sum=0;
    i=0;
    int mx=INT_MIN;
    while(j<n)
    {
        sum+=a[j];
        if(j-i+1<k)
          j++;
        else if(j-i+1==k)
        {
            mx=max(mx,sum);
            sum-=a[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
    return 0;
}*/


// Posting implementation of code :  TC O(n) in time and space O(K)
/*#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    vector<int>arr(n),ans;
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    cin>>k;
	    deque<int>list;
	    
	    int j(0),i(0);
	    while(j<arr.size()){
	        if(arr[j]<0) list.push_back(arr[j]);
	        
	        
	        if(j-i+1<k){
	            j++;
	            continue;
	        }
	        else if(j-i+1==k){
	            if(!list.empty())
	                ans.push_back(list.front());
	            else ans.push_back(0);
	            
	            if(arr[i]<0) list.pop_front();
	            i++; 
	        }
	        j++;
	    }
	    for(int item:ans) cout<<item<<" ";
	    cout<<endl;
	}
	return 0;
}*/

/*
// Online C++ compiler to run C++ program online
// Count Occurrences Of Anagrams | Sliding Window
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str="aabaabaa";
    string str2="aaba";
    
    int N=str.size();
    int k=str2.size();
    int res=0, count=0;

    for(int y=0;y<k;y++)
    count=count+str2[y];
    
    //cout<<"Words count in short string= "<<count<<endl;
    int i=0,j;
    for(j=0;j<k;j++)
    {
        count=count-str[j];
    }
    //cout<<"Words when hit window in long string= "<<count<<endl;
    
    if(count==0)
    res++;
    
    for(;j<N;i++,j++)
    {
        count=count+str[j];
        count=count-str[i];
        
        if(count==0)
        res++;
        
    }
    cout<<endl<<res;
    return 0;
}


*/
/*
                    Count Occurrences Of Anagrams | Sliding Window
import java.util.*;
public class OccurencesOfAnagram {
public static void main(String[] args) {
		
	    String s = "aabaabaaa";
		String ptr = "aaba";
		
		int k = ptr.length();
		
		int i=0,j=0;
		
		HashMap<Character,Integer> mp = new HashMap<>();
		
		for(int m=0;m<k;m++)
		{
		    char c = ptr.charAt(m);
		    
		    if(mp.containsKey(c))
		    {
		        mp.put(c,mp.get(c)+1);
		    }
		    else{
		    mp.put(c,1);
		    }
		}
		int count = mp.size();
	    int ans = 0;
	    while(j<s.length())
	    {
	        char sc = s.charAt(j);
	        if(mp.containsKey(sc))
	        {
	            mp.put(sc,mp.get(sc)-1);
	            
	            if(mp.get(sc) == 0)
	            {
	                count--;
	            }
	        }
	        
	        if(j-i+1<k)
	        {
	            j++;
	        }
	        else if(j-i+1==k)
	        {
	            if(count==0)
	            {
	                ans++;
	                System.out.println(s.substring(i,j+1));
	            }
	            
	            if(mp.containsKey(s.charAt(i)))
	            {
	                mp.put(s.charAt(i),mp.get(s.charAt(i))+1);
	                
	                if(mp.get(s.charAt(i))==1)
	                {
	                    count++;
	                }
	            }
	            i++;
	            j++;
	        }
	       
	        
	        
	    }
	    
	    System.out.println(ans);
	}
}
*/
/*#include <bits/stdc++.h>

using namespace std;
int countAnagram(string s,string p)
{
    int n=s.length();
    int k=p.length();
    int i;
    unordered_map <char,int> umap;
    for(i=0;i<k;i++)
      umap[p[i]]++;
    int j=0,ans=0;
    int count=umap.size();

    while(j<n)
    {
        if(umap.find(s[j])!=umap.end())
        {
            umap[s[j]]--;
            if(umap[s[j]]==0)
              count--;
        }
        if(j-i+1<k)
          j++;
        else if(j-i+1==k)
        {
            if(count==0)
            {
                ans++;
                cout<<s.substr(i,j+1)<<endl;
            }
              
            if(umap.find(s[i])!=umap.end())
            {
                umap[s[i]]++;
                if(umap[s[i]]==1)
                  count++;
            }
            i++;
            j++;
        }
    }

    return ans;
}
int main()
{
    string s="forxxorfxdofr";
    string p="for";
    cout<<countAnagram(s,p);
    return 0;
}*/

/*
   maximum number in a given slide window


#include <bits/stdc++.h>

using namespace std;
vector <int> MaxSlidingWindow(int arr[],int n,int k)
{
    int i=0,j=0;
    deque <int> dq;
    vector <int> v;
    // Edge Condition
    if(k>n)
    {
        v.push_back(*max_element(arr,arr+n));
        return v;
    }
    while(j<n)
    {
        while(dq.size()>0 && dq.back()<=arr[j])
            dq.pop_back();
        dq.push_back(arr[j]);
        if(j-i+1<k)
          j++;
        else if(j-i+1==k)
        {
            v.push_back(dq.front());
            if(dq.front()==arr[i])
               dq.pop_front();
            i++;
            j++;
        }
    }

    return v;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],i;
    for(i=0;i<n;i++)
       cin>>arr[i];
    vector <int> v;   
    v=MaxSlidingWindow(arr,n,k);
    
    for(i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
*/
/*
    Longest Substring With K Unique Characters | Variable Size Sliding Window


#include <bits/stdc++.h>

using namespace std;
int MaxLargest(string s,int k)
{
    int i=0,j=0;
    int mx=0;
    unordered_map <char,int> umap;
    while(j<s.length())
    {
        umap[s[j]]++;
        if(umap.size()<k)
          j++;
        else if(umap.size()==k)
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else if(umap.size()>k)
        {
            while(umap.size()>k)
            {
                umap[s[i]]--;
                if(umap[s[i]]==0)
                   umap.erase(s[i]);
                i++;
            }
            j++;
        }
    }

    return mx;
}
int main()
{
    
    
    string s;
    cin>>s;
    //cin.ignore();
    int k;
    cin>>k;
    cout<<MaxLargest(s,k);
    return 0;
}
*/

/*
    Longest Substring With Without Repeating Characters | Variable Size Sliding Window
*/

#include <bits/stdc++.h>

using namespace std;
int first=0,last=0;
int solve(string s)
{
    int i=0,j=0,mx=0;
    int n=s.length();

    unordered_map <char,int> umap;
    while(j<n)
    {
        umap[s[j]]++;
        if(umap.size()==j-i+1)
        {
            first=i;
            last=j;
            mx=max(mx,j-i+1);
        }
        else if(umap.size()<j-i+1)
        {
            while(umap.size()<j-i+1)
            {
                umap[s[i]]--;
                if(umap[s[i]]==0)
                  umap.erase(s[i]);
                i++;
            }
        }
        j++;
    }

    return mx;
}
int main()
{
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
    cout<<s.substr(first,last);
    return 0;
}

 // Stack Practice Problems 
// 1.Nearest Greatest to Left


// 1000 90 80 70 1 2 3 4 5 6


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v(10,0);
//     for(int i=0;i<10;i++)
//     {        int x;
//     	cin>>x;
//              v[i]=x;
//     }
//     for(auto Z:v)
//     {
//     	cout<<Z<<" ";
//     }
//     cout<<endl;
//    stack<int>s;
//    vector<int>ans;
//  for(int i=0;i<v.size();i++)
//  {    
//  	   while(!s.empty()&&v[i]<=s.top())
//    	s.pop();
//    if(s.empty())
//    	ans.push_back(-1);
//    else if(s.size()!=0)
//    	ans.push_back(s.top());
//    s.push(v[i]);

//  }
//  for(auto X:ans)
//  	cout<<X<<" ";
//  return 0;


// }


// In leetcode example, for a given input - "abbaca" the output was - "ca" instead of "aaca" ..  basically it is again reducing the aaca to "ca". Could you elaborate for one such example

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string s;
// 	cin>>s;
// 	int start=0;
// 	int end=0;
// 	int count=0;

// 	string res="";
// 	if(s.length()<2)
// 		cout<<"No Duplicates";
// 	while(end<s.length())
// 	{
// 		if(s[start]!=s[end])
// 		{
// 		 res+=s[start];
// 		 // res+=to_string(start);
// 	     start++;
	   
// 	     continue;
// 		}
// 		if(s[start]==s[end]&&end==s.length()-1)
// 			res+=s[start];
// 		if(s[start]==s[end])
// 		{  
// 		    while(s[start]==s[end]&&s[end]!=s.length())
// 		    { 
// 		    	count++;
// 		    	  end++;
// 		    }

//           if(count>1&&end!=s.length()-1)
//           {
//           	  start=end;
      
//           	  end++;
//           	  count=0;
//           }
//           else if(count<=1)
//           {
//           	 count=0;
//           	continue;
//           }
//           else
//           {
//              start=end; 
//           }
         
      
        
// }
// 		}

// cout<<res;


// return 0;
// }

// ********* Remove all adjacent duplicates in a string ************************ 


// abbaca
// aaca

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string s;
// 	cin>>s;
// 	string res="";
// 	int i=0;
// 	while(i<s.length())
// 	{
// 		if(s[i]!=s[i+1])
// 		{
// 			res+=s[i];
// 			i++;
// 			continue;
// 					}
// 		else if(s[i]==s[i+1]&&i<s.length())
// 		{
// 			while(s[i]==s[i+1])
// 			{
// 				i++;
// 			}
// 			i++;
// 		}

// 	}
// cout<<res;
// }


// The Above code only removes the adjacent duplicates for one pass , Not all the adjacent Duplicates 

// ex: abbaca will be aaca not ca 





// abaaca 


// abaaca


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// 	string s;
// 	cin>>s;
// 	string s1="";
// 	s1=s;


// 	int i=0;
// 	for(int j =0;j<s.length();j++)
// 	{
// 		s1[i++]=s[j];
	

// 		if(i>=2&&s1[i-1]!=s1[i-2])
// 		{	
// 			continue;
// 		}
// 		else if(i>=2&&s1[i-1]==s1[i-2])
// 		i-=2;
// 	}

//  cout<<s1.substr(0,i);
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// 	string s;
// 	cin>>s;
// 	string s1="";
// 	s1=s;



// 	int i=0;
// 	for(int j =0;j<s.length();j++)
// 	{
// 		s1[i]=s[j];
	
// if(i==0)
// {
// 	i++;
// 	continue;
// }
	
// 		if(s1[i]!=s1[i-1])
// 		{	
// 			i++;
// 			continue;
// 		}

// 		else if(s1[i]==s1[i-1])
// 		i--;
// 	}

//  cout<<s1.substr(0,i);
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string s;
// 	cin>>s;
//    char prev='\0';
//      int k=-1;
//      int i=0;
//      while(i<s.length())
//      {
//      	if(s[i]!=prev)
//      	{
//      		s[++k]=s[i];
//      		prev=s[i];
//      		i++;
//      		continue;
//      	}
//      	else if(s[i]==prev)
//      	{
//      		while(s[i]==prev)
//      			i++;
    
//      		k--;
//      		if(k==-1)
//      			prev='\0';
//      		else 
//      		  prev=s[k];
//      	}	
     

//      }



// 	cout<<s.substr(0,k+1);
// 	return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// 	int a[5];
// 	for(int i=0;i<5;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int z=0;
// 	int o=0;
// 	while(o<5)
// 	{
// 		if(a[o]==1)
// 			o++;
// 		else
// 		swap(a[z++],a[o++]);
// 	}
// 	for(int i=0;i<5;i++)
// 		cout<<a[i]<<" ";
// 	return 0;
// }

// *************Maximise Array**************

#include<bits/stdc++.h>
using namespace std;
bool comp( pair<int,int> &a, pair<int,int> &b)
{
    if(a.first!=b.first)
    {
        return a.first>b.first;
    }
    else 
    return a.second>b.second;
    
}
   vector<int> maximizeArray(int* arr1, int* arr2, int n) {
           
        vector<pair<int,int>>V;
        for(int i=0;i<n;i++)
        {  
            V.push_back(make_pair(arr2[i],2));
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {    
            V.push_back(make_pair(arr1[i],1));
        }
        sort(V.begin(),V.end(),comp);
         unordered_map<int,int>mp;
    int count=n;
    int i=0;
    while(count)
    {
        if(mp.find(V[i].first)==mp.end())
        {
            mp[V[i].first]=V[i].second;
            count--;
        }
        i++;
    }
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        if(mp[arr2[i]]==2)
        res.push_back(arr2[i]);
    }
     for(int i=0;i<n;i++)
    {
        if(mp[arr1[i]]==1)
        res.push_back(arr1[i]);
    }
 for(auto x:res)
 	cout<<x<<" ";
    return res;
    }
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
   for(int i=0;i<n;i++)
   {
   	cin>>arr1[i];
   	cin>>arr2[i];
   }
   vector<int>res1;
   res1=maximizeArray(&arr1[0], &arr2[0], n);
   for(auto x:res1)
   	cout<<x<<" ";
   return 0;
}




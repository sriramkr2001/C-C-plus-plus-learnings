#include<bits/stdc++.h>
using namespace std;

// Merge Sort //


// #include<bits/stdc++.h>
// using namespace std;

// void merge(int* arr,int l,int r,int m)
// {
//     int lsa[m+1-l];
//     int rsa[r-m];
//     int lsai=0;
//     int rsai=0;
//     for(int i=l;i<=m;i++)
//     {
//     	lsa[lsai++]=arr[i];
//     }
//     for(int i=m+1;i<=r;i++)
//     {
//     	rsa[rsai++]=arr[i];
//     }
//       int j=0,k=0;

// int L=l;

// while(j<m-l+1&&k<r-m)
// {
// 	if(lsa[j]<=rsa[k])
// 	{
// 	   arr[L++]=lsa[j];
// 	   j++;
// 	}
// 	else if(rsa[k]<=lsa[j])
// 	{
// 		arr[L++]=rsa[k];
// 		k++;
// 	}
// }
//    if(j==m+1-l)
//    {

//      while(k<r-m)
//      {
//      	arr[L++]=rsa[k++];
//      }


//    }
//   else if(k==r-m)
//    {

//      while(j<m+1-l)
//      {
//      	arr[L++]=lsa[j++];
//      }


//    }



 



// }

// void merge_sort(int*arr,int l,int r)
// {

// if(l>=r)
// 	return;
// int m = (l+r)/2;
// merge_sort(&arr[0],l,m);
// merge_sort(&arr[0],m+1,r);
// merge(&arr[0],l,r,m);

// }






// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++)
// {

// 	cin>>arr[i];
// }
// for(int i=0;i<n;i++)
// {

// 	cout<<arr[i]<<" ";
// }

// cout<<endl;

// merge_sort(&arr[0],0,n-1);


// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }

// }

// Modified Merge Sort: To segregate the negative and positive elements in an array


// #include<bits/stdc++.h>
// using namespace std;

// void merge(int* arr,int l,int r,int m)
// {
//     int lsa[m+1-l];
//     int rsa[r-m];
//     int lsai=0;
//     int rsai=0;
//     for(int i=l;i<=m;i++)
//     {
//     	lsa[lsai++]=arr[i];
//     }
//     for(int i=m+1;i<=r;i++)
//     {
//     	rsa[rsai++]=arr[i];
//     }
//       int j=0,k=0;

// int L=l;

// while(j<m-l+1&&k<r-m)
// {
// 	if(lsa[j]<0&&rsa[k]<0||lsa[j]>0&&rsa[k]>0)
// 	{
// 	   arr[L++]=lsa[j];
// 	   j++;
// 	}
// 	else if(rsa[k]<=lsa[j])
// 	{
// 		arr[L++]=rsa[k];
// 		k++;
// 	}
// 	else if(rsa[k]>=lsa[j])
// 	{
// 		arr[L++]=lsa[j];
// 	   j++;
// 	}
// }
//    if(j==m+1-l)
//    {

//      while(k<r-m)
//      {
//      	arr[L++]=rsa[k++];
//      }


//    }
//   else if(k==r-m)
//    {

//      while(j<m+1-l)
//      {
//      	arr[L++]=lsa[j++];
//      }


//    }



 



// }

// void merge_sort(int*arr,int l,int r)
// {

// if(l>=r)
// 	return;
// int m = (l+r)/2;
// merge_sort(&arr[0],l,m);
// merge_sort(&arr[0],m+1,r);
// merge(&arr[0],l,r,m);

// }






// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++)
// {

// 	cin>>arr[i];
// }
// for(int i=0;i<n;i++)
// {

// 	cout<<arr[i]<<" ";
// }

// cout<<endl;

// merge_sort(&arr[0],0,n-1);


// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }

// }







// #include<bits/stdc++.h>
// using namespace std;

// void merge(int* arr,int l,int r,int m)
// {
//     int lsa[m+1-l];
//     int rsa[r-m];
//     int lsai=0;
//     int rsai=0;
//     for(int i=l;i<=m;i++)
//     {
//     	lsa[lsai++]=arr[i];
//     }
//     for(int i=m+1;i<=r;i++)
//     {
//     	rsa[rsai++]=arr[i];
//     }
//       int j=0,k=0;

// int L=l;

// while(j<m-l+1&&k<r-m)
// {  
//     if(L%2==0)
// {
// 	if(lsa[j]<0&&rsa[k]<0||lsa[j]>0&&rsa[k]>0)
// 	{
// 	   arr[L++]=lsa[j];
// 	   j++;
// 	}
// 	else if(rsa[k]<=lsa[j])
// 	{
// 		arr[L++]=rsa[k];
// 		k++;
// 	}
// 	else if(rsa[k]>=lsa[j])
// 	{
// 		arr[L++]=lsa[j];
// 	   j++;
//     }
//          }	
// }
//    if(j==m+1-l)
//    {

//      while(k<r-m)
//      {
//      	arr[L++]=rsa[k++];
//      }


//    }
//   else if(k==r-m)
//    {

//      while(j<m+1-l)
//      {
//      	arr[L++]=lsa[j++];
//      }


//    }



 



// }

// void merge_sort(int*arr,int l,int r)
// {

// if(l>=r)
// 	return;
// int m = (l+r)/2;
// merge_sort(&arr[0],l,m);
// merge_sort(&arr[0],m+1,r);
// merge(&arr[0],l,r,m);

// }






// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++)
// {

// 	cin>>arr[i];
// }
// for(int i=0;i<n;i++)
// {

// 	cout<<arr[i]<<" ";
// }

// cout<<endl;

// merge_sort(&arr[0],0,n-1);


// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }



//     string decodeAtIndex(string S, int K) {
        
//         string curr="";
        
     
        
//         for(int i=0;i<S.size();i++)
//         {
//             if(isdigit(S[i]))
//             {   
//                 string X=curr;
                
//              string Y="";
//              Y+=S[i];
//              int Z=stoi(Y);
             
//                 for(int i=0;i<Z-1;i++)
//                 {
//                     curr+=X;
//                 }
//              X="";
//             }
//             else 
//                 curr+=S[i];
//         }
//         string x="";
//           x+= curr[K+1];
//         return x;
        
//     }




// int main()
// {
// 	string str;
// 	cin>>str;
// 	int K;
// 	cin>>K;
//  string X =	 decodeAtIndex( str,  K);
//  cout<<X;
//  return 0;

// }


// // #include<bits/stdc++.h>
// // using namespace std;
// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {   int flag=0;
//         int arr[3];
//         int sum=0;
//         for(int i=0;i<3;i++)
//         {
//             cin>>arr[i];
//             sum+=arr[i];
//         }
//         for(int i=0;i<3;i++)
//         {   if(sum>9&&sum%9==0)
//             {
//             if(arr[i]<sum/9)
//             {
//             cout<<"NO"<<endl;
//             flag=1;
//             break;
//             }
//         }
//         }
//         if(flag==0){
//         if(sum<9||sum%9!=0)
//         cout<<"NO";
//         else cout<<"YES";
//         cout<<endl;
//         }
//     }
//   return 0;  
// }

// #include<bits/stdc++.h>
// using namespace std;


// string removeDuplicates(string S) {
        
        
        
//         stack<char>s;
//         for(int i=0;i<S.size();i++)
//         {
//             if(s.size()==0)
//             {
//                       s.push(S[i]);
//                 continue;
                
//             }
            
//             if(s.top()==S[i])
//             {
//                 s.push(S[i]);
//             continue;
//             }
            
            
//             char U=s.top();
//           if(U!=S[i])
//           {
//               string X=""; 
//               X+=S[i-1];
//               string Z=""; 
//               Z+=s.top();
//               while(X==Z &&s.size())
//               {
//                   s.pop();
//               }
//               s.push(S[i]);
//           }
//         }  
           
//         string Y="";
//         while(!s.empty())
//         {
//             Y+=s.top();
//             s.pop();
//         }
//         reverse(Y.begin(),Y.end());
//         return Y;
//     }


// int main()
// {
// 	string X;
// 	cin>>X;
// 	string Y=removeDuplicates( X);
// 	cout<<Y;
// }

// string minRemoveToMakeValid(string S) {
//         stack<pair<char,int>>s;
//         for(int i=0;i<S.size();i++)
//         {  
//             if(S[i]!='('S[i]!=')')
//                 continue;
//             if(s.size()==0)
//             {
//                 s.push(make_pair(S[i],i));
//                 continue;
//             }
//             if(S[i]=='(')
//             {
//               s.push(make_pair(S[i],i));
//                continue; 
//             }
//            if(s.top().first=='('&&S[i]==')')
//                s.pop();
//             else
//                 s.push(make_pair(S[i],i));
//         }
//      while(!s.empty())
//      {   cout<<s.top().first<<endl;
//          int x = s.top().second;
//          S.erase(x,1);
//          s.pop();
         
         
//      }
//       return S;  
    
//     }

//     int main()
//     {
//     	string s;
//     	cin>>s;
//     	s=minRemoveToMakeValid(s);
//     	cout<<s;
//     	return 0;
//     }


// #include<bits/stdc++.h>

// using pii = pair<int, int>;
// 	using ll = long long;
// 	const ll mod = 1000000007;
// using namespace std;
// int main()
// { 
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//        cout<<a[i]<<" ";
       
//     }
//      cout<<endl;
//     ll ans = 0;
		
// 		stack<int> s;
// 		vector <pii> lr(n);

// 		for (int i = 0; i < n; ++i) {
// 			lr[i].first = -1;
// 			lr[i].second = n;
// 		}

// 		for (int i = 0; i < n; ++i) {
// 			while (!s.empty() && a[i] > a[s.top()]) {
// 				int curr = s.top();
// 				s.pop();
// 				lr[curr].second = i;
// 				if (!s.empty()) {
// 					lr[curr].first = s.top();
// 				}
// 			}
// 			s.push(i);
// 		}

// 		while (!s.empty()) {
// 			int curr = s.top();
// 			s.pop();
// 			if (!s.empty()) {
// 				lr[curr].first = s.top();
// 			}
// 		}
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<lr[i].first<<" ";
//     }
//     cout<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<lr[i].second<<" ";
//     }
//     cout<<endl;
//     return 0;
    

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>arr[i];
// 	}

// 	int x=0;
// 	int y=1;
// 	for(int i=0;i<n&&x<n;i+=2)
// 	{    
		 
// 		if(arr[i]%2==0&&arr[x]%2!=0&&x<n)
// 		{
//              swap(arr[i],arr[x]);
//              x+=2;
             
      
            
// 		}	
// 		if(arr[i]%2==1&&arr[y]%2!=1&&y<n)
// 		{
//              swap(arr[i],arr[y]);
//              y+=2;
       

          
// 		}


// 	}
// 	for(int i=0;i<n;i++)
// 		{
// 			cout<<arr[i]<<" ";
// 		}
// 		return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
 
//  vector<int>arr;
// int n=5;
//  for(int i=0;i<n;i++)
//  {
//  	int x;
//  	cin>>x;
//  	arr.push_back(x);

//  }
// cout<<endl;
//    nth_element(begin(arr), begin(arr) + (arr.size() - 1) / 2, end(arr));
//    int m=arr[(arr.size() - 1) / 2];
//   cout<<m;
//   cout<<endl;
//   for_each(arr.begin(),arr.end(),[](int i)
//   {
//   	cout<<i<<" ";
//   });
//   cout<<endl;
//   partial_sort(begin(arr), begin(arr) + 3, end(arr));

//   for_each(arr.begin(),arr.end(),[](int i)
//   {
//   	cout<<i<<" ";
//   });
//   cout<<endl;

//   return 0;




// }

// CPP program for above approach

// O(n) solution for finding smallest subarray with sum
// greater than x
// 
// #include <bits/stdc++.h> 
  
// using namespace std; 
  
// int countSubarrWithEqualZeroAndOne(int arr[], int n){ 
//   map<int,int> mp; 
//   int sum=0; 
//   int count=0; 
//   for (int i = 0; i < n; i++) { 
//             //Replacing 0's in array with -1 
//             if (arr[i] == 0) 
//                 arr[i] = -1; 
  
//             sum += arr[i]; 
  
//             If sum = 0, it implies number of 0's and 1's are 
//             equal from arr[0]..arr[i] 
//             if (sum == 0) 
//                 count++; 
  
//             if (mp[sum]) 
//                 count += mp[sum]; 
//             if(mp[sum]==0) 
//                 mp[sum]=1; 
//             else
//                 mp[sum]++; 
  
//         } 
//   return count; 
// } 
  
// int main() 
// { 
//   int arr[] = {1, 0, 0, 1, 0, 1, 1}; 
  
//   int n = sizeof(arr)/sizeof(arr[0]); 
  
//   cout<<"count="<<countSubarrWithEqualZeroAndOne(arr, n); 
// } 

// #include<bits/stdc++.h>
// using namespace std;
//  int longestOnes(vector<int>& A, int K) {
//         int zeroCount = 0, l = 0;
//         int maxLen = INT_MAX;
//         for( int r = 0 ; r < A.size() ; ++r ) {

//             if( A[ r ] == 0 ) ++zeroCount;
                         	 
//                 while( zeroCount==K ) {
//                 if( A[ l ] == 0 )--zeroCount;
//                 ++l;		
//                if(zeroCount==K)
//            maxLen = min( maxLen, r - l + 1 );
                
//              }
             
        
            
            
//         }
//         cout<<l<<endl;
//         return maxLen;
//     }

// int main()
// {
//  int x;
//  vector<int>v={0,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,0,1,1,0,1};
//  x=longestOnes(v,2);
//  cout<<x;
//  return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin>>T;
  
//     while(T--)
//     {   unordered_map<int,int>mp;
//         vector<int>v;
//         for(int i=0;i<4;i++)
//         {
//             int x;
//             cin>>x;
//             v.push_back(x);
//             mp[x]++;
//         }
//    int y= 4-mp.size();
//    cout<<y<<endl;
//     }
// }

// 0 10 1 3 2--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// long long int fib(long long int n)
// {
// 	if(n==0)
// 	{
// 		return 1;

// 	}
// 	else
// 	{
// 		return n*fib(n-1);
// 	}
	
// }

// int main()
// {
// 	long long int n;
// 	cin>>n;
// 	cout<<fib(n)<<endl;
// 	return 0;
// }

// int power(int x,int n,int y)
// {
// 	if(n==1)
// 	{
// 		return x;
// 	}
// 	else
// 	{    
// 		return(power(x*y,n-1,y));
// 	}
// }

// int main()
// {
// 	int x,n;
// 	cin>>x>>n;
// 	cout<<power(x,n,x);
// 	return 0;
// }



// vector<int> occurance(vector<int>&v1,vector<int>&v,int i,int data)
// {
// 	if(i==v1.size()-1)
// 	{
// 		if(v1[i]==data)
// 		{
// 			v.push_back(i);
// 		}
// 		return v;
// 	}
// 	if(v1[i]==data)
// {
// 	v.push_back(i);
// }
    
//     return occurance(v1,v,i+1,data);
// }
// int main()
// {
// 	int n,data;
// 	cin>>n;
// 	cin>>data;
// 	vector<int>v1,v;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v1.push_back(x);
// 	}
// 	vector<int>v2;
// 	v2=occurance(v1,v,0,data);
// 	for(auto x:v2)
// 		{
// 			cout<<x<<" ";
// 		}
// 		cout<<endl;

// 		return 0;
// }



// vector<int> occurance(vector<int>&v1,int x,int i,int data)
// {
// 	if(i==v1.size()-1)
// 	{  
// 		if(v1[i]==data)
// 			x++;
// 	     vector<int>v(x,0);
  
// 		if(v1[i]==data)
// 		{  
//            v[x-1]==i;

// 		}

// 		return v;
// 	}
// 	if(v1[i]==data)

// {  
//    x++;
// }
//    vector<int>v;
//    v=occurance(v1,x,i+1,data);
//    if(v1[i]==data)
// 	v[x-1]=i;

  
// return v;
    
// }    

// int main()
// {
// 	int n,data;
// 	cin>>n;
// 	cin>>data;
// 	vector<int>v1,v;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v1.push_back(x);
// 	}
// 	vector<int>v2;
// 	v2=occurance(v1,0,0,data);
// 	// reverse(v2.begin(),v2.end());
// 	for(auto x:v2)
// 		{
// 			cout<<x<<" ";
// 		}
// 		cout<<endl;

// 		return 0;
// }




// *****************************************************************************************************************************************************
// vector<int> occurance(vector<int>&v1,int i,int data)
// {
// 	if(i==v1.size()-1)
// 	{  vector<int>v;
// 		if(v1[i]==data)
// 	   v.push_back(i);
	    
// 		return v;
// 	}

//    else {
//    	  vector<int>v;
//    v=occurance(v1,i+1,data);
//    if(v1[i]==data)
//    {
//    	 v.push_back(i);
//    }

//  return v;
//   }   
// }  

  
  

// int main()
// {
// 	int n,data;
// 	cin>>n;
// 	cin>>data;
// 	vector<int>v1,v;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v1.push_back(x);
// 	}
// 	vector<int>v2;
// 	v2=occurance(v1,0,data);
// 	reverse(v2.begin(),v2.end());
// 	for(auto x:v2)
// 		{
// 			cout<<x<<" ";
// 		}
// 		cout<<endl;

// 		return 0;
// }

// ******************************************************RECURSION PRACTICE PROBLEMS************************************************



// 1.Print Increasing 

// void pi(int n)
// {
// 	if(n==0)
// 	{  cout<<"Hurray Yeah"<<endl;
// 		return ;

// 	}
// 	else {
// 		// simply adding cout<<n before the call print 54321 hurray yeah 12345;
// 		// cout<<n<<endl;
// 		pi(n-1);
// 		cout<<n<<endl;
		

// 	}
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	pi(n);
// 	return 0;
// }


// -----------------------------------------------------------------------------------------------------------------


// 2.Print Decreasing 
// void pd(int n)
// {
// 	if(n==0)
// 	{
// 		return ;

// 	}
// 	else {
// 		cout<<n<<endl;
// 		pd(n-1);
// 		//small add-on prints n to 1 then prints sup i am - 1 to n
// 		cout<<"sup i am "<<n<<endl;
// 	}
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	pd(n);
// 	return 0;
// }


// 3.



// double pow( double x, int  n)
// {
// 	if(n==0)
// 	{
// 		return 1;
// 	}
// 	else 
// 		if(n<0)
// 		{
// 			return pow(x,n+1)/x;
// 		}
// 		else if(n<0)
// 		{
// 			return x*pow(x,n-1);
// 		}
		

// }

// int main()
// {
// 	double x;
// 	cin>>x;
// 	int n;
// 	cin>>n;
// 	double y=pow(x,n);
// 	cout<<y;
// 	return 0;
// }

// ------------------------------------------------------------------------------------------------------------------

// // print substrings using recursion 
// void pss1 ( string s , int i , string op)
// {   
// 	// pss1 prints all substrings from a given index
//  if(i==s.length()-1)
// 	{
// 		op+=s[i];
// 		cout<<op<<endl;
// 		return;
// 	}
//      op+=s[i];
//      cout<<op<<endl;
//      pss1(s,i+1,op);

// }
// void pss ( string s , int i , string op)
// { 
// 	// pss repeats the process of pss1 for all indices by reducing the string size by 1 each time from the front (i.e) abc becomes bc at the 2nd call of psss
// 	if(s.length()==1)
// 	{
// 		cout<<s<<endl;
// 		return;
// 	}
// 	else 
// 	{ 		
// 			pss1(s,0,op);

// 		string S=s.substr(1);
// 		pss(S,0,"");

// 	}
// 	return ;
// }


// int main()
// {
// 	string s;
// 	cin>>s;
// 	pss(s,0,"");
// 	return 0;
// }



// Print SubStrings using recursion 

// void pss(string s, int start, int end)
// {
// 	if(start==s.length()-1)
// 	{
// 		cout<<s.substr(start)<<endl;
// 		return;
// 	}
// 	if(end==s.length()+1)
// 	{
// 		start++;
// 		end=start+1;
// 		pss(s,start,end);
// 	}
// 	else if( start<=s.length()&&end<=s.length())
// 	{
// 		cout<<s.substr(start,end-start)<<endl;
// 		pss(s,start,end+1);
// 	}
// }




//************** General CPP and Pointers Practice************************** 
// int* fn( int*  a , int  b,int size)
// { 

// 	   for(int i=0;i<size;i++)
// 	   {
// 	   	 a[i]+=b;
// 	   	 *(a+i)+=b;
// 	   }

// 	   int* p = new int(5);
// 	   for(int i=0;i<5;i++)
// 	   {
// 	   	cin>>p[i];
// 	   	cout<<p[i]<<endl;;
// 	   }
// 	   return &(*p);
// }
// int main()
// {
// 	// string s;
// 	// cin>>s;
// 	// pss(s,0,1);


// // int arr[2] = {1,1};
// // int *p= arr;

// // cout<<*(p+0)*(*(p+1));


// int a[5]={1,2,3,4,5};

// int b= 10;
// int* x=fn(a,b,5);


// for(int i=0;i<5;i++)
// 	   {
// 	    cout<<a[i]<<" ";
// 	   }
// cout<<endl;
// for(int i=0;i<5;i++)
// 	   {
// 	    cout<<x[i]<<" ";
// 	   }

// 	return 0;
// }





// 1. To Check whether an Array is Sorted or not 


// int is_sorted(vector<int>v,int i)
// {
// 	if(i==v.size()-1)
// 		return 1;
// 	else
// 	{
//       if(v[i]<v[i+1]&&is_sorted(v,i+1)==1)
//       	return 1;
//       else 
//       	return -1;
// 	}
// }





// int main()
// {
// 	vector<int>v(10,0);
// 	for(int i=0;i<10;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v[i]=x;

// 	}

// 	int x=is_sorted(v,0);
// 	cout<<x<<endl;;
// 	for ( auto & x: v)
// 		cout<<x<<" ";
// 	return 0;
// }

// 2. print increasing

// 3.print decreasing 

// 4. First Occurance 

// 5. last Occurance

// 6. Reverse a string 

// 1. Print the string in reverse 


// void reverse(string s, int i)
// {
// 	if(i==s.size()-1)
// 	{

// 		cout<<s[i];
// 			return;
// 	}
// else {
//       reverse(s,i+1);
//       cout<<s[i];
// }


// }


// string reverse1(string s)
// {
// 	if(s.size()==1)
// 	{

// 	  return s;
// 	}
// else {
//      string S = reverse1(s.substr(1));
//  S+=s[0];
//  return S;
// }


// }


// int main()
// {
// 	string s;
// 	cin>>s;
// // reverse(s,0);

// 	string S=reverse1(s);     // Reversed String Returned to S

// cout<<s<<endl;	// Original String Printed 
// cout<<S<<endl;     // Reversed String Printed 

// return 0;
// }




// Print ALl Permutataions of a astring using recursion 


// abc ------->>>>>>    abc,acb,bac,bca,cab,aba;    n! ways to permute a string 

// void permute(string s,string op)
// {
//             if(s.size()==0)
// 	{
// 		cout<<op<<endl;
// 		return;
// 	}
// 	for(int i=0;i<s.size();i++)
// 	{  
// 		op+=s[i];
// 		string s1=s;
// 		s1.erase(i,1);
// 		permute(s1,op);
//     // op.erase(op.size()-1,1);
//     op.pop_back();
// 				// cout<<s1<<endl;
		
// 	}
// }


// int main()
// {
// 	string s;
// 	cin>>s;
// 	permute(s,"");
// 	return 0;
// }







// Function to find all n–digit numbers with a sum of digits equal
// to sum in a bottom-up manner
// void findNdigitNums(vector<int>&result, int index, int n,vector<int>d)
// {
// 	// if the number is less than n–digit and its sum of digits is
// 	// less than the given sum
// 	if (index < n)
// 	{
// 		// char d = '0';

// 		// special case: number cannot start from 0
// 		// if ( == 0) {
// 		// 	d = '1';
// 		// }
//           int i=0;
// 		// consider every valid digit and put it in the current
// 		// index and recur for the next index
// 		while (i<d.size())
// 		{ 
// 			if(i==0&&index==0)
// 			{  i++;
// 				continue;
// 			}
			
// 			result[index] = d[i];
// 			// int digit = (d[i]);
// 			findNdigitNums(result, index + 1, n,d);
// 		     i++;
// 		}
// 	}

// 	// if the number becomes n–digit and its sum of digits is
// 	// equal to the given sum, print it
// 	else if (index == n) {
// {
// 	for(auto x: result)
// 	{
// 		cout<<x;
// 	}
// 	cout<<" ";
// }

// 	}

// }

// int main()
// {
// 	int n = 2;  		// n–digit
// 	int sum = 6;		// given sum

// 	// character array to store the result
// 	vector<int>result(n,0);

// 	// result[n] = '\0';  	// null terminate the array
// vector<int>d={0,1,6,9,8};
// 	// findNdigitNums(result, 0, n,d);

// 	unsigned long long int x = 100000000000000;
// 	string z=to_string(x);
// 	cout<<z.substr(0,10);

// 	return 0;
// }


// --------------------------------------------------  solving from smaller inputs 

// vector<string> solve1(int n)
// {  
//     if(n==1)
//     {
//         vector<string>v1={"0","1"};
//         return v1;
// }
//     else 
//     { 
//         vector<string>v=solve1(n-1);
//         vector<string>v2;
//         for(int i =0;i<v.size();i++)
//             v2.push_back("0"+ v[i]);
//          for(int i =v.size()-1;i>=0;i--)
//             v2.push_back("1"+ v[i]);
//         return v2;

//     }
    
// }
    
    
    
//     vector<int> solve(int n) {
//       if(n==0)
//           return {0};
//      else
//      {  
//          vector<string>v=solve1(n);
//          for(auto x:v)
//              cout<<x<<" ";
//         vector<int>v1;
//          for(int i=0;i<v.size();i++)
//      {
//              string s = v[i];
//             int k = 0;
//            int res = 0;
//          for(int j = 0;j<v[i].size();j++)
//          {
//              int l = v[i][j]-'0';
//              cout<<l<<" ";
//              if(l==0)
//              { 
//                  k++;
//                  continue;
// }
//              else 
//              {
//                  res+=pow(2,k);
//                  k++;
//              }
           
//          }
//   v1.push_back(res);
             
// }
//    return v1;    
//          // return {0};
// }
// }

       
 // --------------------------------------------------- forward solve-----forward direction up the stack but not depending on smaller inputs to operate then return, rather after n==0, every call returns the same value of vref--------> we still do return but no dependency on smaller inputs while coming back            

// vector<string> solve1(int n,vector<string>&refv)
// {  
//     if(n==0)
//     {   
//         return refv;
// }
//     else 
//     {  
//         vector<string>v=refv;
//         vector<string>v2;
//         for(int i =0;i<v.size();i++)
//             v2.push_back("0"+ v[i]);
//          for(int i =v.size()-1;i>=0;i--)
//             v2.push_back("1"+ v[i]);
//              refv=v2;
//            solve1(n-1,refv);
//         return refv;

//     }
    
// }
    
    
    
//     vector<int> solve(int n) {
//       if(n==0)
//           return {0};
//      else
//      {  vector<string>refv={""};
//          vector<string>v=solve1(n,refv);
//          // for(auto x:v)
//          //     cout<<x<<" ";
//         vector<int>v1;
//          for(int i=0;i<v.size();i++)
//      {
//              string s = v[i];
//             int k = 0;
//            int res = 0;
//          for(int j = v[i].size()-1;j>=0;j--)
//          {
//              int l = v[i][j]-'0';
//              // cout<<l<<" ";
//              if(l==0)
//              { 
//                  k++;
//                  continue;
// }
//              else 
//              {
//                  res+=pow(2,k);
//                  k++;
//              }
           
//          }
//   v1.push_back(res);
             
// }
//    return v1;    
//          // return {0};
// }
// }
       
                     


// int main()
// {
// 	vector<int>V=solve(3);
// 	for(auto X: V)
// 		cout<<X<<" ";
// 	cout<<endl;
// 	return 0;
// }

// int main()
// {
// 	int x = INT_MIN;
// 	cout<<x<<endl;
// 	int y = 2/0;
// 	cout<<y;
// 	return 0;
// }





// 2 typesa one is generating the outputs from smaller inputs Babe !!!!!!!!!!!!! 
// vector<vector<int>>v;
// // o/p->[[1,2,3,4]---->[4,3,2,1]] n!=24;
// void permute_fn(vector<int>vs,vector<int>V)
// {  if(V.size()==0)
// 	{
// 		v.push_back(vs);
// 		return;
// 	}
// 	unordered_map<int,int>mp;
// 	for(int i=0;i<V.size();i++)
// 	{  if(mp[V[i]]==1)
// 		{
// 			continue;
// 		}

// 		vs.push_back(V[i]);
// 		mp[V[i]]=1;
// 		vector<int>refv=V;
// 		refv.erase(refv.begin()+i);
// 		permute_fn(vs,refv);
// 		vs.pop_back();
// 	}
// }

// vector<vector<int>> permute_fn1(vector<int>V)
// {  

// 	if(V.size()<=1)
// 	return {V};



// vector<vector<int>>resultant;
// for(int i = 0;i<V.size();i++)
// {   
// 	int x1 = V[i];
// 	vector<int>refv=V;
// 	refv.erase(refv.begin()+i);
// 	vector<vector<int>>refv1=permute_fn1(refv);
// 	for(auto &x : refv1)
// 	{
// 		x.push_back(x1);
// 		reverse(x.begin(),x.end());
// 		resultant.push_back(x);
// 	}



// }


// return resultant;





// }

// int main()
// {

// 	vector<int>V={1,2,3,4};
// 	vector<int>vx;
//    permute_fn(vx,V);
//    // vector<vector<int>>dfs1=permute_fn1(V);
// 	cout<<"[ ";
//    for(auto & x : v)
//    {

//        cout<<"[ ";
//        for(auto &y: x)
// 	      cout<<y<<" ";
// 	    cout<<"]";
// 	    cout<<" ";



//    }
//    cout<<" ]";
//    cout<<endl;
	// cout<<"[ ";
//    for(auto & x : dfs1)
//    {

//        cout<<"[ ";
//        for(auto &y: x)
// 	      cout<<y<<" ";
// 	    cout<<"]";
// 	    cout<<" ";



//    }
//    cout<<" ]";

	// [1,2,3,4,5,6,7]

// 7! =>120*42
   
// cout<<120*42;
//    return 0;
// }


// Generate all decompositions of a string 


// vector<vector<string>>v;

// void decompositions ( string s,vector<string>v1,int i,string curr)
// {
// 	if(i==s.size())
// 	{ 

// 		if(curr =="")
// 		{
// 			v1.push_back(curr);
//     v.push_back(v1);

// 		}
// 		    return;
// 	}
// 	else{  
// 	     curr+=s[i];
// 	     	v1.push_back(curr);
// 		decompositions(s,v1,i+1,"");
// 		v1.pop_back();
// 	     decompositions(s,v1,i+1,curr);
				
		

// 	}

// }

// int main()

// {

	
// 	string s;
// 	cin>>s;
// 	vector<string>v1;
//  decompositions(s,v1,0,"");
// 	for(auto &x: v)
// 	{
// 		for (auto&y: x)
// 		{
// 			cout<<y<<" ";
// 		}

// 		cout<<endl;
// 	}
// 	return 0;
// }


// abcdef




// Generate all substrings using recursion 


// void dfs(string s, int f,int idx,string curr)
// {   

// 	  if(idx==s.size())
// 	  	return;
// 	  for(int i=idx;i<s.size();i++)
// 	  {
//              curr+=s[i];
//              cout<<curr<<endl;

//            dfs(s,1,i+1,curr);
//            if(f==1)
//            	return;
//            else if(f==0)
//            	curr="";
// 	  }

// }


// int main()
// {
//     string s;
//     cin>>s;
//     dfs(s,0,0,"");
//     return 0;




// }
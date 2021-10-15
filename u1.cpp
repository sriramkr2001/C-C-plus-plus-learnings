// //1: Array sum
// #include<bits/stdc++.h>
// using namespace std;
// int array_sum(int* arr,int n,int i)
// {
//    if(i==n)
//     return 0;
//     else
//     return arr[i]+array_sum(arr,n,i+1); ;
// }
// int main()
// {  int n;
//    cin>>n;
//   int* A = new int[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>A[i];
//   }
//   int x= array_sum(A,n,0);
// cout<<x;
// return 0;
// }

// //2.To print all subsequences of a string 
// #include<bits/stdc++.h>
// using namespace std;
// void print( string s , string curr , int n, int i )
// {
//    if(i==n)
//     {  
    
//      cout<<curr<<endl;
//     return;
//  }

// // including the first character
// string s1 = curr + s[i];
//  print(s,s1,n,i+1);
// //Excluding the first character 
// string s2 = curr;
// print(s,s2,n,i+1);
// }
// int  main()
// {
//     string s = "xyz";
//     int n = s.size();
//      print(s,"",n,0);
//      return 0;
// }
// // 3.Display an array 
// #include <bits/stdc++.h> 
// using namespace std; 
 
// void display (vector<int> V)
// {
//   if(n==0)
//   return;
//     int x= V.pop_back();
//     cout<<x<<endl;
//     display(V);
//     return;
// }
// int main(0
// { 
//   int n;
//   cin>>n;
//   int* A = new int[n];
//   vector<int>V;
//   for(int i=0;i<n;i++)
//   {
//     cin>>A[i];
//     v.push_back(A[i])
//   }
//     display(V);


// }
// B

// Remove all adjacent duplicates in a string iterartive 

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    vector<char>v;
//     int x =0;
//     string s;
//     cin>>s;
//     if(s.size()==1)
//         cout<<s.size()<<"------"<<endl;
//     else{

//        int i=0;
    
//     while(i<s.size())
//     {
//         if(x==i)
//         {  
//               if((i==s.size()-1))
//               {
//                 if(v.size()!=0&&v[v.size()-1]==s[i])
//                   continue;
      
//                  v.push_back(s[i]);
//               }
//             i++;
//             continue;
//         }
//         else {
            
//             if(s[x]!=s[i])
//             {
//                 v.push_back(s[x]);
//                 x=i;
//                 continue;
//             }
//            else if(s[x]==s[i])
//            {
//                  // cout<<i<<endl;     
//                while(s[x]==s[i])
//                {
//                 // cout<<i;
//                 i++;
//                }
               
//              while(v.size()!=0&&s[i]==v[v.size()-1])
//              {
//                      cout<<i<<endl;    
//                        x=i;
                 
//                    while(s[x]==s[i])
//                    i++;
//                  v.pop_back();
//              }
            
//            } 
       
//               x=i;    

         
//         }        
//     }

//     }
//   for(auto x1:v)  
//       cout<<x1;
//     return 0;
// }


// Removing all adjacent duplicates using recursion 
// ax

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string& s,int f)
{ 
  if(s.size()==0||s.size()==1)
    return s;
  int x = 0;
  for(int i = 0;i<s.size();i++)
  { 
        if(x==i)
         continue;
           else
           {
            if(s[x]!=s[i])
            {
              x=i;
              continue;
            }
            else if(s[x]==s[i])
            {
              while(s[i]!='\0'&&s[i]==s[x])
                i++;

              s.erase(s.begin()+x,s.begin()+i);
          
              f=1;
              break;
            }  

           }
  }
  // cout<<s<<endl;
  if(f==1)
   removeDuplicates(s,0);
   return s;
}

// int main(){
// string s;
// cin>>s;
// int f =0;
// removeDuplicates(s,f);
// cout<<s<<endl;
// }



// Removing all adjacent duplicates using iteration for-loop

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates1(string& s,int f)
{ 
  if(s.size()==0||s.size()==1)
    return s;
  int x = 0;
  for(int i = 1;i<s.size();i++)
  { 
     
         
           
            if(s[x]!=s[i])
            {
              x=i;
              continue;
            }
            else if(s[x]==s[i])
            {
              while(s[i]!='\0'&&s[i]==s[x])
                i++;

              s.erase(s.begin()+x,s.begin()+i);
              if(x-1>=0)
              {
                    x=x-1;
                 i=x;
              }
              
              f=1;
            }  

           
  }
  // cout<<s<<endl;
  // if(f==1)
  //  removeDuplicates1(s,0);
   return s;
}

int main(){
string s;
cin>>s;
int f =0;
removeDuplicates1(s,f);
cout<<s<<endl;

// stringstream 

//   string s="-100";
//   stringstream ss(s);
//   int x;
// char ch,ch1;
// ss >> x >> ch >>ch1;


// string s = "sss1 1111 11115 lllwclls";
// stringstream ss(s);
// string mystr1;
//     ss >> mystr1;
//    int mystr2;
//     ss>>mystr2;
//   int mystr3;
//     ss>>mystr3;
//     cout<<mystr1<< " "<<mystr2<<" "<<mystr3<<endl;

// cout<<isNumber("9.5");
// return 0;
}




for(int i=0;i<nums.size();i++)
{
  cout<<"WHatsapp!!";
  return 0;
}



71234523444421

if(elm[i]<elm[i-1])
  if(profit!=-1)
    sum+=profit
  profit=0;



             Hello       
     /                 \
   Hello               Hello  
 /      \                  /      \
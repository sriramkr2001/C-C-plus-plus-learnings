#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str1="aabbccdd";
    string str2="d";
    string str3="";
    int count=0;
    for(int i=0;i<str1.length();i++)
    {    int k=0;
       
        for(int j=0;j<str2.length();j++)
        {  

          if(str1[i+j]==str2[j])
           {
            str3+=str2[j];
            count++;
           }
           else
           break;
        } 
       }
       if(count!=0)
        break;
   } 
   if(count!=0)
   {
   str3+='\0';
   cout<<str3; 
   }
    else
        cout<<"common substring isn't there type another 2nd string";

    return 0;

} 


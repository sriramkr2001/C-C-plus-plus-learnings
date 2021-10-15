// node creations 


	  // Node* root = new Node(1);
	  // root->left= new Node(2);
	  // root->right= new Node(3);
	  // root->left->left= new Node(4);
	  // root->left->right= new Node(5);
	  // root->right->left= new Node(6);
	  // root->right->right= new Node(7);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;

	    // preorder1(head);
	    // int result=0;
	    // cout<<endl;
	    // int result=0;
	    // int x = Height(head,0);
	    // cout<<"The Height is :"<<x<<endl;
    // cout<<endl;
    // inorder1(head);
    // cout<<endl;



// TREE QUESTIONS 

#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val)
	{
		data = val;
		left=NULL;
		right=NULL;
	}
}Node;

void preorder1(Node* head)
{
	if(head==NULL)
		return;
	else{
		// cout<<head->data<<" ";
		preorder1(head->left);
		preorder1(head->right);

	}
}

void inorder1(Node* head)
{
	if(head==NULL)
		return;
	else{
		inorder1(head->left);
		// cout<<head->data<<" ";
		inorder1(head->right);

	}
}


// ***************************Getting the Tree from the preorder and inorder Traversal ********************************
// int idx=0;
unordered_map<int,int>mp;
Node* gettree(vector<int> preorder ,vector<int> inorder,int start,int end)
{ 
  static int idx=0;
	if(start>end)
	return NULL;
	Node* curr= new Node(preorder[idx]);
	// cout<<mp[preorder[idx]]<<" ";
	int pos=mp[preorder[idx]];
idx++;
	if(start==end)
 	return curr;

	curr->left = gettree(preorder,inorder,start,pos-1);
	curr->right = gettree(preorder,inorder,pos+1,end);

	return curr;
}


int Height(Node* head,int K)
{ 
	// cout<<K<<" ";
     if(head==NULL)
     {      
     	     	// result=max(result,K);
     	     	return K;
     }
     else{
     	// ++K;
     int x1 =  Height(head->left,K+1);
     	// cout<<K<<" ";

     int x2 = Height(head->right,K+1);
     	return max(x1,x2);
     }




return -1;

}
int maxi=0;

int Diameter(Node* head)
{
	  if(head==NULL)
    	return 0;
    else{ 
    	// int result=0;
    	int x = Height(head->left,0);
    	// result=0;
    	int y = Height(head->right,0);
    	maxi=max(maxi,x+y);
    Diameter(head->left);
    Diameter(head->right); 	
    	 return maxi;
    }

    return -1;
   
}

bool checkBalanced(Node* head,int& flag)
{
	// if(flag==0)
	// 	return 0;
	
	
		if(head==NULL)
		{
			return flag;
		}

		int x = Height(head->left,0);
		int y= Height(head->right,0);
		if(abs(x-y)>1)
			flag=0;



				if(flag==1)
			checkBalanced(head->left,flag);
		if(flag==1)
			checkBalanced(head->right,flag);
		return flag;

	
}


int main()
{
	  // vector<int> preorder={1,2,4,6,15,7,8,3,14,5};
	  // vector<int> inorder={6,4,15,7,8,2,1,14,3,5};
		  vector<int> preorder={4,2,1,3,6,5,7,8,9};
	  vector<int> inorder={1,2,3,4,5,6,7,8,9};
	  int k = 0;
	  for ( auto x: inorder)
	  {
	  	mp[x]=k;
	  	k++;
	  }


	  Node* head = gettree(preorder,inorder,0,8);







    // **************** Program to get the diameter of the binary tree******************
   // int z = Diameter(head);
   // int flag=1;
   // int x = checkBalanced(head,flag);
   // cout<<x<<endl;
   // cout<<z<<endl;
int x = 11;
cout<<"Sup Babee";

    return 0;
}


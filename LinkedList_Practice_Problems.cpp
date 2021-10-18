#include<bits/stdc++.h>
using namespace std;

 typedef struct node
{
	int data;
	node* next;
	void print_Node()
	{
		cout<<data;
		cout<<endl;
		cout<<next;
			cout<<endl;
	}

}Node;
void Create_Node(int n,Node* &t)
{
	Node* T= t;
	   for(int i=0;i<n;i++)
   {
   	  Node* app= new Node();
   	   int data;
   	   cin>>data;
   	    app->data=data;
   	  
   	    while(T->next!=NULL)
   	    {
   	    	T=T->next;
   	    }
   	    T->next=app;
   }
}
void Display(Node* t)
{

while(t!=NULL)
{
cout<<t->data<<" "<<t<<"Awesome"<<" ";
cout<<endl;
t=t->next;
 
}
}

int main()
{
   Node* Head = new Node();
   Head->data=10;
   Head->next=NULL;
   Node* temp = new Node();
   temp->data= 20;
   temp->next=NULL;
   Head->next=temp;

int n;
cin>>n;
Create_Node(n,Head);
Display(Head);


  
// cout<<t->data<<" "<<t;
 return 0;
}



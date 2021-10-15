#include<bits/stdc++.h>
using namespace std;

 struct node
{
	int data;
	node* next;
	void print_Node()
	{
		cout<<data;
		cout<<endl;
		cout<<next;
	}

};

int main()
{
    struct node head;
    head.data=10;
    head.next=NULL;
    head.print_Node();
    return 0;
}
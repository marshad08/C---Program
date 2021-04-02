#include<bits/stdc++.h>

using namespace std;
typedef struct node
{
	int x;
	struct node *next;
}Node;
Node *head;
// Sort the linked list using Bubble Sort
void sortlist(Node *start)
{
	Node *p=start;
	Node *q;
	while(p->next)
	{
		q=p->next;
		while(q)
		{
			if(p->x < q->x)
			{
				int temp=p->x;
				p->x=q->x;
				q->x=temp;
			}
			q=q->next;
		}
		p=p->next;
	}
}
void display(Node *start)
{
	if(start==NULL)
	{
		cout<<"Linked list is Empty";
		return;
	}
	Node *t=start;
	while(t)
	{
		cout<<t->x<<" ";
		t=t->next;
	}
	cout<<endl;
}
// Reverse the linked list using Itreative approch
Node * Reverse(Node *head)
{
	Node *curr=head,*prev=NULL,*next;
	while(curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
// Reverse the linked list using Recursion
void recReverse(Node *prev,Node *curr)
{
	if(curr)
	{
		recReverse(curr,curr->next);
		curr->next=prev;
	}
	else
	  head=prev;
}
// Reverse the linked list using Stack
Node* stackReverse(Node *start)
{
	stack <Node *> s;
	Node *t=start;
	while(t)
	{
		s.push(t);
		t=t->next;
	}
	Node *h=s.top();
	t=h;
	Node *temp;
	s.pop();
	while(!s.empty())
	{
		temp=s.top();
		t->next=temp;
		s.pop();
	}
	t->next=NULL;
	return h;
}
// Create a Linked list
Node* create(Node *start)
{
	Node *new_node,*temp;
	int ch;
	int value;
	do
	{
		cout<<"Enter a value:";
		cin>>value;
		new_node=(Node*)malloc(sizeof(Node));
		new_node->x=value;
		new_node->next=NULL;
		if(start==NULL)
		  start=new_node;
		else
		  temp->next=new_node;
		temp=new_node;
		cout<<"Do u want to create another node? 1/0 :";
		cin>>ch;
	}while(ch);
	return start;
}
// Merge of 2 linked list
Node *Merge(Node *first,Node *second,Node *sorting)
{
	Node *new_node,*p=first,*q=second;
	if(p==NULL)
	  return q;
	if(q==NULL)
	  return p;
	if(p && q)
	{
		if(p->x <= q->x)
		{
			sorting=p;
			p=p->next;
		}
		else
		{
			sorting=q;
			q=q->next;
		}
	}
	new_node=sorting;
	
	while(p&&q)
	{
		if(p->x <= q->x)
		{
			sorting->next=p;
			sorting=p;
			p=p->next;
		}
		else
		{
			sorting->next=q;
			sorting=q;
			q=q->next;
		}
	}
	if(q==NULL)
	  sorting->next=p;
	if(p==NULL)
	 sorting->next=q;
	 
	return new_node;
}
// swap Pair waise Node
Node* swapPair(Node *start)
{
	Node *p=start;
	Node *new_node,*q,*temp;
	
	new_node=p->next;
	while(1)
	{
		q=p->next;
		temp=q->next;
		q->next=p;
		if(temp==NULL || temp->next==NULL)
		{
			p->next=temp;
			break;
		}
		p->next=temp->next;
		p=temp;
	}
	return new_node;
}
int main()
{
	Node *start1=NULL,*start2=NULL;
	start1=create(start1);
	//start2=create(start2);
	//Node *m=Merge(start1,start2,NULL);
	/*display(start);
	Node *te=Reverse(start);
	display(te);
	recReverse(NULL,te);
	display(head);
	Node *de=stackReverse(start);
	display(de);*/
	Node *t=swapPair(start1);
	display(t);
	sortlist(t);
	display(t);
	return 0;
}

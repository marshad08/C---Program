#include<bits/stdc++.h>

using namespace std;
struct demo
{
	int x;
	//struct demo *prev;
	struct demo *next;
}*h;
void Rev(demo *prev,demo *curr)
{
	if(curr)
	{
		Rev(curr,curr->next);
		curr->next=prev;
	}
	else
	{
		h=prev;
	}
}
int main()
{
	demo *head=NULL,*newnode,*temp;
	int ch;
	do
	{
		newnode=(demo *)malloc(sizeof(demo));
		cout<<"Enter a number:";
		cin>>newnode->x;
		newnode->next=NULL;
		if(head==NULL)
		{
			temp=head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Do you want to create a new node YES->1 and NO->0: ";
		cin>>ch;
	}while(ch);
	
	temp=head;
	while(temp)
	{
		cout<<temp->x<<" ";
		temp=temp->next;
	}
	cout<<"\nReverse of linked list is:\n";
	demo *prev=NULL,*current=head,*next;
	while(current)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	temp=prev;
	while(temp)
	{
		cout<<temp->x<<" ";
		temp=temp->next;
	}
	temp=head;
	Rev(NULL,temp);
	temp=h;
	while(temp)
	{
		cout<<temp->x<<" ";
		temp=temp->next;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
template <class X> class ArrayList
{
	private :
		struct stu
		{
			int capacity;
			X *arr;	
		};
		stu *s;
	public :
		ArrayList(int capacity)
		{
			s=new stu;
			s->capacity=capacity;
			s->arr=new X[s->capacity];
		}
		void add_Element(int index,X data)
		{
			if(index>=0 && index<s->capacity)
			  s->arr[index]=data;
			else 
			  cout<<"Inavlid Index\n";
		}
		void display()
		{
			int i;
			for(i=0;i<s->capacity;i++)
			  cout<<s->arr[i]<<" ";
			cout<<endl;
		}
};
int main()
{
	ArrayList <int> l1(4);
	l1.add_Element(0,10);
	l1.add_Element(1,20);
	l1.add_Element(2,30);
	l1.display();
	return 0;
}

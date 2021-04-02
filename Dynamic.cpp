#include <bits/stdc++.h>

using namespace std;
class student
{
	private :
		int roll_no;
		float marks;
		char name[10];
	public :
		student(int r,int m,char n[])
		{
			roll_no=r;
			marks=m;
			strcpy(name,n);
		}
		void display()
		{
			cout<<"Roll no:"<<roll_no<<endl<<"Marks :"<<marks<<endl<<"Name :"<<name;
		}
};

int main()
{
	student *p=new student(102,468,"Arshad");
	/*cout<<"Enter all Nu.:";
	int i;
	for(i=0;i<5;i++)
	   cin>>*(p+i);
	for(i=0;i<5;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;*/
	//p->set;
	p->display();
	delete []p;
	return 0;
}

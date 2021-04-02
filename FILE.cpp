#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("myfile.txt");
	int index=fout.tellp();
	cout<<index<<endl;
	getch();
	fout<<"My Name Is Khan";
	getch();
	index=fout.tellp();
	cout<<index<<endl;
	
	fout.close();
	getch();
	
	ifstream fin;
	fin.open("myfile.txt");
	char ch;
	
	ch=fin.get();
	index=fin.tellg();
	cout<<index<<endl;
	
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
		index=fin.tellg();
	    cout<<index<<endl;
	}
	fin.close();
	return 0;
}

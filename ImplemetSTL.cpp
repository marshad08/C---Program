 #include <bits/stdc++.h>
 
 using namespace std;
 int f(int x,int y)
 {
 	return x>y;
 }
 void setfunction()
 {
 	set <int> S;
 	S.insert(10);
 	S.insert(100);
 	S.insert(50);
 	S.insert(-1);
 	S.insert(-10);
 	cout<<endl;
 	for(int x:S)
 	  cout<<x<<" ";
 	
 	if(S.find(100)!=S.end())
		cout<<"\nElements has been Founded!";
	else
	  cout<<"\nElements not Found!";
	cout<<endl;
	auto i1=S.lower_bound(-10);
	auto i2=S.upper_bound(-1);
	cout<<*i1<<" "<<*i2<<endl;
	i2=S.upper_bound(200);
	if(i2==S.end())
	 cout<<"Oops! cant find something like that!";
   }
 int main()
 {
 	vector <int> A={11,10,2,1};
 	
 	sort(A.begin(),A.end());
 	int i;
 	for(i=0;i<A.size();i++)
 	  cout<<A[i]<<" ";
 	
 	if(binary_search(A.begin(),A.end(),50))
 	  cout<<"Number is Find!"<<endl;
 	else
 	  cout<<"\nNumber is not Present!"<<endl;
 	  
 	A.push_back(100);
 	A.push_back(100);
 	A.push_back(100);
 	A.push_back(150);
 	auto i1=lower_bound(A.begin(),A.end(),100);
 	auto i2=upper_bound(A.begin(),A.end(),100);
 	
 	
 	
 	cout<<*i1<<" "<<*i2<<endl;
 	cout<<i2-i1<<endl;
 	
 	sort(A.begin(),A.end(),f);
 	for(int &x : A)
 	{
 		cout<<x<<" ";
 		x++;
	}
	cout<<endl;
	for(i=0;i<A.size();i++)
	  if(A[i]==150)
	   A.erase(A.begin()+i);
	for(int x:A)
	  cout<<x<<" ";
	setfunction();
 	return 0;
 }

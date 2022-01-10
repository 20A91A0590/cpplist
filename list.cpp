#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l1,l2;
	for(int i=1;i<=5;i++)
	{
		l1.push_back(i);
	}
	for(int i=1;i<=5;i++)
	{
		l2.push_front(i);
	}
    list<int>::iterator it1;
    cout<<"list1:"<<endl;
	for(it1=l1.begin();it1!=l1.end();++it1)
    {
    	cout<<*it1<<"";
	}
	cout<<endl;
	 list<int>::iterator it2;
    cout<<"list2:"<<endl;
	for(it2=l2.begin();it2!=l2.end();++it2)
    {
    	cout<<*it2<<"";
	}
	cout<<endl;
	l1.merge(l2);
	for(it1=l1.begin();it1!=l1.end();++it1)
	{
    	cout<<*it1<<"";
	}
}

#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>di;
		for(int i=1;i<=5;i++)
	{
		di.push_front(i);
		di.push_back(i*3);
	}
	deque<int>::iterator d;
	d=di.begin();
	++d;
	di.insert(d,1,34);
	for(d=di.begin();d!=di.end();d++)
	cout<<*d<<" ";
	cout<<endl;
	di.pop_front();
	di.pop_back();
	for(d=di.begin();d!=di.end();d++)
	cout<<*d<<" ";
	cout<<endl;
}

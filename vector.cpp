#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>ivec;
	for(int i=0;i<5;i++)
	{
		ivec.push_back(i);
	}
	vector<int>::iterator it;
	for(it=ivec.begin();it!=ivec.end();++it)
	{
		cout<<*it<<"";
	}
	cout<<endl;
}


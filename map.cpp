#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map <int,string> mp;
	mp.insert(make_pair(01,"RAJI"));
	mp.insert(make_pair(02,"RAMBO"));
	mp.insert(make_pair(03,"NIHARIKA"));
	mp.insert(make_pair(04,"ALEKYA"));
	mp.insert(make_pair(05,"JAMES"));
	mp.insert(make_pair(06,"SMITH"));
	mp.insert(make_pair(07,"SCOTT"));
	mp.insert(make_pair(11,"BOB"));
	map <int,string>:: iterator pos;
	cout<<"empid"<<"\t"<<"name"<<endl;
	for(pos=mp.begin();pos!=mp.end();++pos)
	cout<<pos->first<<" "<<pos->second<<endl;
	pos=mp.find(05);
	cout<<"value at key 05 is="<<pos->second<<endl;
	mp.erase(11);
	cout<<"map after deletion"<<endl;
	for(pos=mp.begin();pos!=mp.end();++pos)
	cout<<pos->first<<" "<<pos->second<<endl;
	return 0;
}



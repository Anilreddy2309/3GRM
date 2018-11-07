#include<iostream>
#include<stdio.h>
using namespace std;
class disease
{
	public:
	void what()
	{
		cout<<"\n"<<"its itching"<<"\n";
		
	}
};
class eczema:public disease
{
	public:
	void what()
	{
		cout<<"\n"<<"its paining"<<"\n";
		
	}
};
int main()
{
	disease *d,f;
	eczema e;
	d=&f;
	d->what();
	return 0;
	
}

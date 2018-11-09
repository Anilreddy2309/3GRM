#include<iostream>
#include<stdio.h>
using namespace std;
int n,i;
class cse
{
		public:
			struct record
			{
				char name[20];
				int roll;
				int marks;
				char grade;
			}*r,*temp;
			void set();
			void get();
			
};
void cse::set()
{
	cout<<"\n"<<"enter student count";
	cin>>n;
	r=new struct record[n];
	temp=r;
	for(i=0;i<n;i++)
	{
		cout<<"\n enter student details:\n";
		cout<<"\n enter name:";
		cin>>r->name;
		cin->roll;
	}
}

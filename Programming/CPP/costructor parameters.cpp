#include<iostream>
using namespace std;
class parameter
{
	public:
	parameter()
	{
		cout<<'\n default constructor'; 
	}
	parameter::parameter(int k)	
	{ 
		cout<<"\n"<<"K="<<K<<"\n";
		
	}
	parameter(inti,intj)	
	{
		cout<<"\n i="<<i<<"j="<<j<<"\n";
	}
};
int main()
{
 
	parameter p1,p2(6),p3(1,7);
}
 

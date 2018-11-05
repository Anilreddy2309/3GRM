#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

class Test 
{
	char str[25];
	public:
	void read()
	{
		cout<<"enter any string:"<<endl;
		cin>>str;
	}
	void show()
	{
		cout<<"the result string is:"<<str<<endl;
	}
	Test operator+(Test t2)
	{
		Test t3;
		strcpy(t3.str,str);
		strcat(t3.str,t2.str);
		return t3;
		
	}
};

int main()
{
     Test t1,t2,t3;
     t1.read();
     t2.read();
     t3=t1+t2;
     t3.show();
     return 0;
     
}

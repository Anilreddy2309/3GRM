#include<iostream>


using namespace std;
class student
{
	int stu_id;
	public:
	void read()
	{
		cin>>stu_id>>endl;

	}
	friend void display(student s)	// friend returntype fun_name(classname object)
	{
		cout<<s.stu_id;
	}
};
int main()
{
	student stu1;
	stu1.read();
	display(stu1);
}

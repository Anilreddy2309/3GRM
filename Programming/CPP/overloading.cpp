#include<iostream>
using namespace std;
class overloading
{
  public:
  void display()
  {
		std::cout<<"no parameters";
		
		      
  }
  void display(int m)
  {
		std::cout<<"\n"<<"m";
  }
  void display(int m,int n)
  {
		std::cout<<"m"<<"n";
  }
};	
  
  int main()
  {
	overloading a;
	a.display(1);
	a.display(2,6);
	a.display();
	
  }
  

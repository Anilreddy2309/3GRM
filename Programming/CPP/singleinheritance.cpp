#include<iostream>

//base class
class vehicle
{
  
  public:
   vehicle()
   {
       cout<<"this is a vehicle:";
   }
};
// derived class from base class
class car:public vehicle
{
};

// main function
int main()
{
  car obj;
  return 0;
}

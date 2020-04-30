#include<iostream>
using namespace std;
int main ()
{
  char name[30]={0};
  int age;
  cout<<"\n Please enter your first name : ";//only first name
  cin>>name;
  cout<<"\n Please enter your age : ";
  cin>>age;
  cout<<endl;// this line of code is added to create one extra line of space
    if(age>=18)
    {
      cout<<name<<" is eligible for voting"<<endl;
    }
    else
    {
      cout<<name<<" is not eligible for voting"<<endl;
    }
  return 0;
}

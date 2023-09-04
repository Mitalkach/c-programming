#include<iostream>
using namespace std;
int main()
{ 
 int a,b;
 cout<<"enter the value of a and b:";
 cin>>a>>b;
 cout<<"the value of a and b swaping \n "<<"a="<<a<<endl<<"b="<<b<<endl;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"swaping of a and b \n "<<"a="<<a<<endl<<"b="<<b<<endl;

}
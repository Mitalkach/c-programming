#include<iostream>
using namespace std;
int main()
{ 
 int num, factorial=1;
    cout<<"enter the value:";
    cin>>num;
    while(num>0)
    { 
       factorial*=num;
       num--;
       
    }
    cout<<"factorial is:"<<factorial;
    

}
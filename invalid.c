#include<stdio.h>
#include<conio.h>
int main()
{ 
    int no;
    printf("enter no:");
    scanf("%d",&no);
    if(no>0)
    {
      printf("number is valid");
    }
    else if(no<0)
    { 
      printf("number is invalid");
    }
    else 
    {
     printf("0 is neither positive nor negative");
    }
}

//1. Write a function to swap values of two int variables of calling function. (TSRS)
#include<stdio.h>
int swap(int*,int*);
int main()
{
int a,b;
printf("enter the value of two int variable");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf(" a=%d and b=%d",a,b);

return 0;

}
int swap(int *p,int *q)
{
 int t;
 t=*p;
 *p=*q;
 *q=t;
}

//5. Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int maximum(int *,int);
int main()
{
int A[10];
printf("enter the value in the array");
for(int i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
int max=maximum(A,10);
printf("%d",max);


return 0;
}
int maximum(int *p,int size)
{
int largest = *(p+1);
for(int i=1;i<size-1;i++)
 {
   if(largest < *(p+i+1))
   {
     largest =*(p+i+1);
   }
 }
  return largest;
}

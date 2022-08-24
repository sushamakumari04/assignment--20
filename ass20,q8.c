//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int SumOfElements(int *);
int main()
{
int A[10];
printf("Enter the value in the array");
for(int i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
int sum=SumOfElements(A);
printf("the sum of all elements in the array is %d",sum);

return 0;
}
int SumOfElements(int*p)
{
int count=0;
for(int i=0;i<10;i++)
{
count=count+*(p+i);
}
return count;
}

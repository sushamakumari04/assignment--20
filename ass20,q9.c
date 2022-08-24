//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int Reverse(int *,int );
int main()
{
int A[10];
printf("Enter the elements in the array");
for(int i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
Reverse(A,10);

return 0;
}
int Reverse(int *p,int size)
{
printf("the value in the reverse order");
for(int i=size-1;i>-1;i--)
 {
   printf("%d  ",*(p+i));
 }

}


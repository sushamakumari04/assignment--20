//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
int main()
{
int A[10];
printf("enter the value in the array");
for(int i=0;i<10;i++)
{
 scanf("%d",&A[i]);
}
sort(A,10);
for(int i=0;i<10;i++)
    {
     printf("%d ",A[i]);
    }

return 0;
}
void sort(int *p,int size)
{
 for(int i=size;i>0;i--)
{
 for(int j=0;j<size;j++)
    {
     if( *(p+j) > *(p+j+1) )
        {
         int t;
         t = *(p+j);
         *(p+j)= *(p+j+1);
         *(p+j+1)= t;
        }
    }
}

}

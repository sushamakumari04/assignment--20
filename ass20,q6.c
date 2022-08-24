//6. Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int main()
{
char A[20];
printf("Enter the string");
fgets(A,20,stdin);
int l=length(A);
printf("the length of string is %d",l-1);

return 0;
}
int length(char *p)
{
int i;
for( i=0;*(p+i);i++);
return i;

}

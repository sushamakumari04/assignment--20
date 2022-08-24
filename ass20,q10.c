//10. Write a program to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
int ReverseString(char*,int);
int main()
{
char A[20];
printf("Enter the string");
fgets(A,20,stdin);
int l=strlen(A);
printf("%d",l-1);
ReverseString(A,l-1);

return 0;
}
int ReverseString(char*p,int l)
{
for(int i=l;i>-1;i--)
{
   printf("%c",*(p+i));
}

}

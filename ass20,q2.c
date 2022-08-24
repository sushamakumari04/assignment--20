//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
int swap(char*,char*);
int main()
{
char A[10],B[10];
printf("enter the first strings");
fgets(A,10,stdin);
printf("enter the second string");
fgets(B,10,stdin);
swap(A,B);
printf("%s",A);
printf("%s",B);

return 0;
}
int swap(char *p,char *q)
{
char C[10];
 ///doubt///////////////////////// how to swap to strings

//strcpy(t,*p);
//strcpy(*p,*q);
//strcpy(*q,t);
}

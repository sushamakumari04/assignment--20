//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
int main()
{
int i;
char A[20];
printf("Enter the string");
fgets(A,20,stdin);
for( i=0;A[i];i++);
printf("length of string is %d",i);
int c = ConVow(A);
printf(" the total consonant in the string is %d",c-1);
int vow=i-c;
printf("the total number of vow is %d",vow);

return 0;
}
int ConVow(char *p)
{
int vow=0,con=0;
for(int i=0;*(p+i);i++)
{
 if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
    vow++;
else {
    con++;
}
}
return con;

}

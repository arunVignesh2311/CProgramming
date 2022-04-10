#include<stdio.h>
#include<string.h>
void main()
{
char str[100]; // Declare String
int i,j,n;
scanf("%s",str); // set to String
n=strlen(str);if(n%2!=0){
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{if(j==(n-1-i))
printf("%c",str[n-i-1]);
else if(j==i)
printf("%c",str[j]);
else
printf(" ");
}
printf("\n");
}}else {printf("Not possible");
}
}
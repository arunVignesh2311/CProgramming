#include<stdio.h>
int main()
{
int i,j,N,count=0,position=0;
printf("enter the number of rows: ");
scanf("%d", &N); count=N;
for(i=1;i<N*2;i++)
{
for(j=1;j<N*2;j++)
{if(i%2==count||j/2==count){count=N;}else{count=count+(i/2*j/2);}
printf("%d",j/2);printf(" ");
}count--;
printf("\n");
}
return 0;
}

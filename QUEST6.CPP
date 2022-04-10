#include<stdio.h>
#include<string.h>
int main(){
int i,count,possible=0;  //Integer Declaration
char str[100],pref[100]; //String Declaration
printf("Print the largest possible of the given string");
printf("Enter the number of string to be entered = ");
scanf("%s",str); //Get String
count=strlen(str)/2;//Lenght of the String
for(i=0;i<count;++i){
if(str[i] != str[strlen(str)-i-1])
++possible;
else{
}
}
if(possible<=1)
printf("True"); //Return true when the given string make polindrome
else
printf("false");
return 0;
}
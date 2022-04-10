 #include<stdio.h>
 #include<string.h>
#include<stdarg.h>

 int main() {
 int count,i,j,len,k;
 char stringArray[10];char *temp,*val,str;
  printf("Enter the number of string to be entered =\n");
 scanf("%d",count);
for(i=0;i<count;i++){ getchar();
scanf("%c",stringArray[i]);
}
for(i=0;i<count;i++){*val=stringArray[i];
len = strlen(val);
for(j=0;j<len;j++){
for(k=j+1;k<len;k++){*val=stringArray[i];
if(val[j]<val[k]){
*temp=val[k];
val[k]=val[j];
stringArray[i]=*temp;
}
}
}
printf("String Result %d: %s",i,stringArray[i]);
}
return 0;
}
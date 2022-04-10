
#include <stdio.h>
#include<string.h>
int main()
{
    char string[100];// Declare String
    int i,posibile = 1,count=0, length;
    printf("Enter String: ");
    scanf("%s", string); // Set value  for the string
    length=strlen(string);
    for(i=0;i<length;i++){
        if(i+1<length){
            if(count == 0) {
                count = (string[i]-string[i+1]);
            }
            else if (count!=(string[i]-string[i+1])){
                posibile = 0;
                break;
            }
        }
        
    }
    if(posibile==0){
        printf("Not Equal");
    }
    else {
        printf("Equal");
    }
    return 0;
}

#include <stdio.h>
#include<string.h>
int main() {

char string[20];
printf("Enter the string ");
gets(string);
for(int i=0;i<strlen(string);i++)
{
    if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I'|| string[i]=='O' || string[i]=='U')
    {
        for(int j=i;j<strlen(string);j++)
        {
            string[j]=string[j+1];
        }
        
    }
}
printf("String after deleting vowels are: %s",string);
    return 0;
}

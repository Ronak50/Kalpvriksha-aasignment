#include <stdio.h>
#include <string.h>
int main() {
    char string[20];
    scanf("%[^\n]",string);
    int j;
    for(int i=0;string[i]!='\0';i++)
    {
        while(string[i]>='0' && string[i]<='9')
        {
            for(j=i;string[j]!='\0';j++)
            {
                string[j] = string[j+1];
                
            }
            string[j]='\0';
        }
    }
    printf("After removing number %s",string);

    return 0;
}

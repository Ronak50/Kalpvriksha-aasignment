#include <stdio.h>
#include <string.h>
int main() {
    char string[20];
    scanf("%s",string);
    char temp;
    for(int i=0;i<strlen(string)-1;i++)
    {
        for(int j=i+1;j<strlen(string);j++)
        {
            if(string[i]>string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("string after sorting :%s",string);

    return 0;
}

#include <stdio.h>
#include<string.h>
int maximum(int a,int b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
int main() {
  char string1[10];
  printf("Enter first string: ");
  scanf("%s",string1);
  char string2[10];
  printf("Enter second string: ");
  scanf("%s",string2);
  int matrix[11][11];
  int length1 = strlen(string1);
  int length2 = strlen(string2);
  for(int i=1;i<length1+1;i++)
  {
      for(int j=1;j<length2+1;j++)
      {
          if(string1[i-1]==string2[j-1])
          {
              matrix[i][j] = matrix[i-1][j-1]+1;
          }
          else
          {
              matrix[i][j] = maximum(matrix[i-1][j],matrix[i][j-1]);
          }
      }
  }
  printf("The length of Longest common subsequence is: %d",matrix[length1][length2]);

    return 0;
}

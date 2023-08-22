#include<stdio.h>
#include<string.h>
int main()
{
    char arr[200];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]arr", arr);
    for (i = 0;arr[i] != '\0';i++)
    {
        if (arr[i] == ' ' && arr[i+1] != ' ')
            count++;
    }
    printf("Number of words in given string are: %d\n", count+1);
return 0;
}

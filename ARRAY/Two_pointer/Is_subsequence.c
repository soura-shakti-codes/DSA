#include "stdio.h"
#include "string.h"
int main()
{
        char string1[100];
        char string2[100];
        printf("Enter first string :");
        fgets(string1 , 100 , stdin);
        printf("Enter second string :");
        fgets(string2 , 100 , stdin);
        string1[strlen(string1) - 1] = '\0';
        string2[strlen(string2) - 1] = '\0';
        int slow = 0 , fast = 0;
        while(slow < strlen(string1) && fast < strlen(string2))
        {
                if(string1[slow] == string2[fast])
                {
                        slow++;
                        fast++;
                }
                else
                {
                        fast++;
                }
        }
        if(slow == strlen(string1))
                printf("It is a subsequence");
        else
                printf("It is not a subsequence");
}

#include "stdio.h"
#include "string.h"
int main()
{
        char string[100];
        printf("Enter a string :");
        fgets(string,100,stdin);
        string[strlen(string) - 1] = '\0';
        int slow = 0 , fast = strlen(string) - 1;
        while(slow < fast)
        {
                if(string[slow] != string[fast])
                {
                        printf("The string is not pallindrome.\n");
                        return 0;
                }
                else
                {
                        slow++;
                        fast--;
                }
        }
                printf("The string is pallindrome.\n");

}

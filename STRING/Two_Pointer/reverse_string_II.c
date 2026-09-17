/*WAP for reverse string II .
Example 1:

Input: s = "abcdefg", k = 2
Output: "bacdfeg"
Example 2:

Input: s = "abcd", k = 2
Output: "bacd"
*/
#include "stdio.h"
#include "string.h"
int main()
{
        char string[100];
        printf("Enter a string :");
        fgets(string,100,stdin);
        string[strlen(string)- 1] = '\0';
        int k;
        printf("Enter the value of k :");
        scanf("%d",&k);
        int index;
        for(index = 0 ; index < strlen(string) ; index += 2 * k)
        {
                int left = index;
                int right = index + k - 1;
                if(right >= strlen(string))
                {
                        right = strlen(string) - 1;
                }
                while(left < right)
                {
                        int temp = string[left];
                        string[left] = string[right];
                        string[right] = temp;
                        left++;
                        right--;
                }
        }
                printf("After reversing the string :%s",string);
}

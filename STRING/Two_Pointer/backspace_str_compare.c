/*WAP for backspace string compare.
Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
*/
#include "stdio.h"
#include "string.h"
int is_compare(char *s , char *t)
{
        // Start from the last character of both strings.
        int left = strlen(s) - 1;
        int right = strlen(t) - 1;
        // These count how many normal characters must be deleted
        int skipS = 0;
        int skipT = 0;
        // Continue while at least one string still has characters.
        while(left >= 0 || right >= 0)
        {
                while(left >= 0)
                {
                        if(s[left] == '#')
                        {
                                skipS++;
                                left--;
                        }
                        else if(skipS > 0)
                        {
                                skipS--;
                                left--;
                        }
                        else
                        {
                                break;
                        }
                }
                while(right >= 0)
                {

                        if(t[right] == '#')
                        {
                                skipT++;
                                right--;
                        }
                        else if(skipT > 0)
                        {
                                skipT--;
                                right--;
                        }
                        else
                        {
                                break;
                        }
                }
                if(left < 0 || right < 0)
                {
                        return left == right;
                }
                if(s[left] != t[right])
                {
                        return 0;
                }
                left--;
                right--;
        }
        return 1;
}
int main()
{
        char s[100];
        char t[100];
        printf("Enter first string :");
        fgets(s , 100 , stdin);
        printf("Enter second string :");
        fgets(t , 100 , stdin);
        s[strlen(s) - 1] = '\0';
        t[strlen(t) - 1] = '\0';
        int result = is_compare(s,t);
        if(result == 1)
                printf("True.\n");
        else
                printf("False.\n");
}

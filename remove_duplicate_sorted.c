#include <stdio.h>
int main()
{
        int size;
        printf("Enter the size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int slow = 0 , fast;
        for(fast = 1 ; fast < size ; fast++)
        {
                if(array[slow] != array[fast])
                {
                        slow++;
                        array[slow] = array[fast];
                }
        }
        printf("The unique elements are :");
        for(index = 0 ; index <= slow ; index++)
                printf("%d ",array[index]);
        printf("Total number of unique elements are :%d\n",slow + 1);
}                                               
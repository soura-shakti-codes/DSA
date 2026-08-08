#include "stdio.h"
int main()
{
        int size;
        printf("Enter size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int value;
        printf("Enter the value to remove :");
        scanf("%d",&value);
        int slow = 0 , fast;
        for(fast = 0 ; fast < size ; fast++)
        {
                if(array[fast] != value)
                {
                        array[slow] = array[fast];
                        slow++;
                }
        }
        printf("The remaining elements are :");
        for(index = 0 ; index < slow ; index++)
                printf("%d",array[index]);
}

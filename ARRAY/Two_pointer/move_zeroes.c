#include "stdio.h"
int main()
{
        int size;
        printf("Enter the size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int slow = 0 , fast ;
        for(fast = 0 ; fast < size ; fast++)
        {
                if(array[fast] != 0)
                {
                        int temp = array[slow];
                        array[slow] = array[fast];
                        array[fast] = temp;
                        slow++;
                }
        }
        printf("The array is :");
        for(index = 0 ; index < size ; index++)
                printf("%d ",array[index]);
}                                     
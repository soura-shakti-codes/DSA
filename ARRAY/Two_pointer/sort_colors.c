//WAP for sort colors.
//  0 = red , 1 = white , 2 = blue
//  if array = [1,0,2,0,1,2,0,1] then answer is : [0,0,0,1,1,1,2,2]
//  Otherwise we may apply sorting algorithm like bubble sort or quick sort
//  but sorting mechanism is not efficient solution.
//  It is also known as Dutch National Flag Algorithm .
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
        int start = 0;
        int end = size - 1;
        int middle = 0;
        while(middle <= end)
        {
                if(array[middle] == 0)
                {
                        int temp = array[start];
                        array[start] = array[middle];
                        array[middle] = temp;
                        middle++;
                        start++;
                }
                else if(array[middle] == 1)
                {
                        middle++;
                }
                else
                {
                        int temp = array[middle];
                        array[middle] = array[end];
                        array[end] = temp;
                        end--;
                }
        }
                printf("After sorting the array is :");
                for(index = 0 ; index < size ; index++)
                        printf("%d",array[index]);
}



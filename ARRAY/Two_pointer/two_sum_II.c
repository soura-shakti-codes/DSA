//WAP for two sum II - Input array is sorted.
#include "stdio.h"
#include "stdlib.h"
int *two_sum(int *array , int size , int target , int *returnsize)
{
        int *result = (int *)malloc(sizeof(int) * 2);
        int left = 0 , right = size - 1;
        while(left < right)
        {
                int sum = array[left] + array[right];
                if(sum == target)
                {
                        result[0] = left + 1;
                        result[1] = right + 1;
                        *returnsize = 2;
                        return result;
                }
                else if(sum < target)
                {
                        left++;
                }
                else
                {
                        right--;
                }
        }
        *returnsize = 0;
        free(result);
        return NULL;
}
int main()
{
        int size;
        printf("Enter size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int target;
        printf("Enter the target element :");
        scanf("%d",&target);
        int returnsize;
        int *result = two_sum(array,size,target,&returnsize);
        if(result != NULL)
        {
                printf("Two indices are :%d %d\n",result[0],result[1]);
                free(result);
        }
        else
        {
                printf("No pair Found.\n");
        }
}

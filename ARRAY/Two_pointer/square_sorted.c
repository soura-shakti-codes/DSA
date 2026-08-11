//WAP for square of sorted array
#include "stdio.h"
#include "stdlib.h"
int main()
{
        int size;
        printf("Enter size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int result[size];
        int left = 0 , right = size - 1 , pos = size - 1;
        while(left <= right)
        {
                if(abs(array[left]) > abs(array[right]))
                {
                        result[pos] = array[left] * array[left];
                        left++;
                }
                else
                {
                        result[pos] = array[right] * array[right];
                        right--;
                }
                pos--;
        }
        printf("The array is :");
        for(index = 0 ; index < size ; index++)
                printf("%d ",result[index]);
}
// Ex :-  if array = [-3 , -2 , 0 , 3 , 4]
       //     result = [0 , 4 , 9 , 9 , 16 ]

//WAP for container with most water.
#include "stdio.h"
int main()
{
        int size;
        printf("Enter size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the height of the container :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int left = 0 , right = size - 1;
        int width,height,water;
        int max_water = 0;
        while(left < right)
        {
                width = right - left;
                if(array[left] < array[right])
                {
                        height = array[left];
                        water = width * height;
                        left++;
                }
                else
                {
                        height = array[right];
                        water = width * height;
                        right--;
                }
                if(water > max_water)
                        max_water = water;
        }
        printf("Maximum water = %d\n", max_water);
}

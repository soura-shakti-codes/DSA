//WAP for remove duplicate from sorted array II .
//in this problem says that any unique element can occur at most twice .
// Ex :- array = [1,1,2,2,2,3,3,4,4,4]
//      Output :- 8    (i.e [1,1,2,2,3,3,4,4])
#include "stdio.h"
int main()
{
        int size;
        printf("Enter the size :");
        scanf("%d",&size);
        int array[size],index;
        printf("Enter the sorted elements of an array :");
        for(index = 0 ; index < size ; index++)
                scanf("%d",&array[index]);
        int slow = 2 , fast;
        for(fast = 2 ; fast < size ; fast++)
        {
                if(array[fast] != array[slow-2])
                {
                        array[slow] = array[fast];
                        slow++;
                }
        }
         printf("The number of elements of an array is :%d", slow);
}

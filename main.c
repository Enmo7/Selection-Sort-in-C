#include <stdio.h>
#include <stdlib.h>

void selectionsort(int arr2[],int len);

int main()
{
    int arr[] = {-1,2,86,5,66,22,14,523,65,0,163,632,6563,2326,210,3,30};

    int length = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, length);

    return 0;
}

void selectionsort(int arr2[],int len)
{
    int i,c,m;

    int temp;

    for(i = 0; i < len-1; ++i)
    {
        m = i;

        for(c=i+1; c<len; ++c)
        {
            if(arr2[c]<arr2[m])
            {
                m=c;
            }
        }
        //swap
        temp = arr2[m];

        arr2[m] = arr2[i];

        arr2[i] = temp ;
    }

    printf("The array after sorting is: \n");
    for(i=0; i<len; ++i)
    {
        printf("%d \n", arr2[i]);
    }
}

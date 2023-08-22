#include <stdio.h>
int main ()
{
    int arr[50];
    int pos, i, num;
    printf ("Enter number of elements: \n");
    scanf ("%d", &num);

    printf ("\nInput the array elements: \n");

    for (i = 0; i < num; i++ )
    {
        scanf ("%d", &arr[i]);
    }

    printf( "\nInput the position to be deleted: \n");
    scanf ("%d", &pos);

    if (pos >= num+1)
    {
        printf ("\nDeletion not possible");
    }
    else
    {
        for (i = pos - 1; i < num -1; i++)
        {
            arr[i] = arr[i+1];
        }

        printf ("\nThe new array is: \n");

        for (i = 0; i< num - 1; i++)
        {
            printf ("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}

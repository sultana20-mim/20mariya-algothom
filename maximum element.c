#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);

    return 0;
}

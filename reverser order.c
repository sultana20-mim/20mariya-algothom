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

    printf("Reverse order: ");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

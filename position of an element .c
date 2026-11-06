#include <stdio.h>

int main()
{
    int arr[100], n, search;
    int found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            printf("Position = %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Not Found");
    }

    return 0;
}

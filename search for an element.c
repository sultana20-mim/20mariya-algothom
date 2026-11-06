#include <stdio.h>

int main()
{
    int n, i, search;
    int found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}

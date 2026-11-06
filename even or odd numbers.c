#include <stdio.h>

int main()
{
    int n, i;
    int even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float average;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}

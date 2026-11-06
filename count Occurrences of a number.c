#include <stdio.h>

int main()
{
    int arr[6] = {2, 5, 2, 7, 2, 8};
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == number)
        {
            count++;
        }
    }

    printf("%d appears %d times", number, count);

    return 0;
}

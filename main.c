#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[5];
    int count = 0;

    printf("Input 5 coin toss results: \n");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }

    printf("%d \n", count >= 3 ? 1 : 0);

    return 0;
}
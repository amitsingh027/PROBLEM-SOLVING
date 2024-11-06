/*
#include <stdio.h>
int main()
{
    int numbers[5];
    int sum = 0;
    float mean, median;

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    mean = (float)sum / 5;

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    median = numbers[2];

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    return 0;
}
*/



// using function

#include <stdio.h>
int isPalindrome(int num, int *rev, int original)
{
    if (num == 0)
    {
        return *rev == original;
    }

    *rev = *rev * 10 + num % 10;
    return isPalindrome(num / 10, rev, original);
}

int main()
{
    int num, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }

    if (isPalindrome(num, &rev, num))
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

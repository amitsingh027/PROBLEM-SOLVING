// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. We stop at this point because we are left with one digit.

#include <iostream>
using namespace std;
int addDigits(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    int result = addDigits(num);
    cout << "The result after repeatedly adding digits is: " << result << std::endl;
    return 0;
}

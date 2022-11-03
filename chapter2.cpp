#include <iostream>

using std::cin;
using std::cout;

void exercise1();
void exercise2();
void exercise3();

int doubleDigitValue(int);

int main()
{
    // exercise1();
    exercise2();
    // exercise3();

    return 0;
}

// -------- Draw triangle --------
void exercise1()
{
    for (int row = 1; row <= 7; ++row)
    {
        for (int hashNum = 1; hashNum <= 4 - abs(4 - row); ++hashNum)
        {
            cout << "#";
        }

        cout << "\n";
    }
}

// -------- Luna checksum --------
void exercise2()
{
    char digit;
    int oddLengthChecksum = 0;
    int evenLengthChecksum = 0;
    int position = 1;

    cout << "Enter a number: ";

    digit = cin.get();

    while (digit != 10)
    {
        if (position % 2 == 0)
        {
            oddLengthChecksum += doubleDigitValue(digit - '0');
            evenLengthChecksum += digit - '0';
        }
        else
        {
            oddLengthChecksum += digit - '0';
            evenLengthChecksum += doubleDigitValue(digit - '0');
        }

        digit = cin.get();
        position++;
    }

    int checksum;

    if ((position - 1) % 2 == 0)
        checksum = evenLengthChecksum;
    else
        checksum = oddLengthChecksum;

    cout << "Checksum is " << checksum << ". \n";

    if (checksum % 10 == 0)
        cout << "Checksum is divisible by 10. Valid. \n";
    else
        cout << "Checksum is not devisible by 10. Invalid. \n";
}

int doubleDigitValue(int digit)
{

    int doubledDigit = digit * 2;
    int sum;

    if (doubledDigit >= 10)
        sum = 1 + doubledDigit % 10;
    else
        sum = doubledDigit;

    return sum;
}

// -------- Tracking state --------
void exercise3()
{
}

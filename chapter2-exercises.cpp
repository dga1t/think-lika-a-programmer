#include <iostream>

using namespace std;

void exercise21();
void exercise22();

int main()
{
  // exercise21();
  exercise22();

  return 0;
}

/*
 *   Exercise 2-1
 *
 *   Using only single-character output statements that output a hash mark,
 *   a space, or an end-of-line symbol, write a program that outputs the
 *   following shape:
 *
 *   ########
 *    ######
 *     ####
 *      ##
 */

void exercise21()
{
  for (int row = 0; row <= 3; row++)
  {
    for (int charNum = 1; charNum <= 8; charNum++)
    {
      if (row != 0 && charNum <= row)
      {
        cout << " ";
        continue;
      }
      if (charNum >= 9 - row)
      {
        cout << " ";
        continue;
      }
      cout << "#";
    }
    cout << "\n";
  }
}

/*
 *   Exercise 2-2
 *
 *   Using only single-character output statements that output a hash mark,
 *   a space, or an end-of-line symbol, write a program that outputs the
 *   following shape:
 *
 *      ##
 *     ####
 *    ######
 *   ########
 *   ########
 *    ######
 *     ####
 *      ##
 */

void exercise22()
{
  for (int row = 1; row <= 4; ++row)
  {
    for (int space = 1; space <= abs(row - 4); ++space)
    {
      cout << " ";
    }
    for (int hashNum = 1; hashNum <= row * 2; ++hashNum)
    {
      cout << "#";
    }
    cout << "\n";
  }
  for (int row = 1; row <= 4; ++row)
  {
    for (int space = 1; space <= row - 1; ++space)
    {
      cout << " ";
    }
    for (int hashNum = 1; hashNum <= 8 - (row - 1) * 2; ++hashNum)
    {
      cout << "#";
    }
    cout << "\n";
  }
}
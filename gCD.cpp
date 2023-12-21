#include <iostream>

using namespace std;
// Method to calculate GCD
int gcd(int a, int b)
{
  // Create a while loop to run through one number
  while (b != 0)
  {
    /*This algorithim (Euclidean algorithim) works by calculating the
    modulous of a and b then swapping them until the modulo of a and b = 0 */
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int main()
{
  int num1, num2;
  cout << "Enter Number: ";
  cin >> num1;
  cout << "Enter Second Number: ";
  cin >> num2;

  cout << gcd(num1, num2);
}

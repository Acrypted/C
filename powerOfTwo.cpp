#include <iostream>
using namespace std;

bool powerOfTwo(int k)
{
  /*If our number k is less than or equal to 1 the nwe return false because it can't possible be a power of 2.If it's greater we then create a while loop and say while our given number is greater than our temporary number which we increment in powers of two if our given is equal to our temporaty number it is a power of two so we return true else we increment our power of 2; if num becomes greater than two we return false*/
  if (k <= 1)
  {
    return false;
  }
  else
  {
    int num = 2;
    while (k >= num)
    {
      if (k == num)
      {
        return true;
      }
      else
      {
        num *= 2;
      }
    }
    return false;
  }
}
int main()
{
  int x;
  cout << "Input integer";
  cin >> x;
  if (powerOfTwo(x))
  {
    cout << "True";
  }
  else
  {
    cout << "False";
  }
}

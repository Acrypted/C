#include <iostream>

using namespace std;

int Pow(int x, int y)
{
  /* Create a temporary number starting at 1
  We then loop Y times making this O(log(y)) which is O(log(n)) then then multiple our temp number by x we repeat this y times
  we return temp */
  int temp = 1;

  for (int i = 0; i < y; i++)
  {
    temp *= x;
  }
  return temp;
}
int main()
{
  int x;
  cin >> x;

  int y;
  cin >> y;

  cout << Pow(x, y);
}

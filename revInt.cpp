#include <iostream>
#include <string>
using namespace std;

int main()
{
  // declare an integer
  int num;
  // allow user to input integer
  cin >> num;
  // checks if negative
  bool negative = false;
  if (num < 0)
  {
    negative = true;
    /// converts the number to a postive
    num = -num;
  }
  // converts int to a string
  string str = to_string(num);
  // Create an empty string
  string str2 = "";
  // For loop index through our string
  for (int i = str.length() - 1; i >= 0; i--)
  {
    // add the current (i) value to our empty string
    str2 += str[i];
  }
  if (negative)
  {
    // in str2 we insert to the beginning a negative sign
    str2.insert(str2.begin(), '-');
  }
  // Print out
  cout << "You entered: " << str2 << endl;
  return 0;
}

#include <iostream>

using namespace std;
int indexOf(char c, const char *str)
// return first occurence of c in a string
/*Loop through the string
if c == to the pointer at the string we return the current length as its index
if not we increment the string and length
if we do not find the char we return -1*/
{
  int length = 0;
  while (*str != '\0')
  {
    if (c == *str)
    {
      return length;
    }
    else
    {
      length++;
      *str++;
    }
  }
  return -1;
}

int main()
{
  char test = 'a';
  const char *str = "string";
  cout << indexOf(test, str);
}

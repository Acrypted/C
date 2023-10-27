#include <iostream>
using namespace std;

char *substring(int i, int j, const char *str)
{
  // Conditions that dont make sense
  if (i < 0 || j <= i)
  {
    return NULL;
  }
  // calculate the length of str
  int length = 0;
  const char *temp = str;
  while (*temp != '\0')
  {
    length++;
    temp++;
  }
  // More clauses that don't make sense
  if (i >= length || j > length)
  {
    return NULL;
  }
  // now we generate our substring
  char *sub = new char[j - i + 1];
  char *start = sub;

  for (int k = i; k < j; k++)
  {
    *sub = *str;
    sub++;
    str++;
  }
  *sub = '\0';
  return start;
}
int main()
{
  int test = 0;
  int test2 = 3;
  const char *str = "Let's not be to";
  cout << substring(test, test2, str);
}
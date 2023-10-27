#include <iostream>
using namespace std;

char *replace(char c, char p, const char *str)
{
  /*We get the length of the string
  we then create a new string as this is the one we want to return
  we loop through our given string and check if the character at our given string is equal to c if so we replace that in our new string with p
  if not we add the str at i to our new string
  Succesfully replacing all of str*/
  int len = 0;
  const char *temp = str;
  while (*temp != '\0')
  {
    len++;
    temp++;
  }
  char *str2 = new char[len + 1];
  for (int i = 0; i < len; i++)
  {
    if (str[i] == c)
    {
      str2[i] = p;
    }
    else
    {
      str2[i] = str[i];
    }
  }
  str2[len] = '\0';
  return str2;
}
int main()
{
  char c = 'r';
  char p = 'i';
  const char *str = "string";
  char *str2 = replace(c, p, str);
  cout << str2 << endl;

  return 0;
}
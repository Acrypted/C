#include <iostream>

using namespace std;
char *copy(char *dest, const char *src)
{
  /*Calucluate the length of the src and the destination
  Check if destenation has a large enough allocation for source
  If not return NULL
  if so then we copy our src to our destination and add the null pointer to the end
  then we return the pointer To the start of our string*/
  int lengthSrc = 0;
  const char *temp = src;

  while (*temp != '\0')
  {
    lengthSrc++;
    temp++;
  }
  int lengthDest = 0;
  temp = dest;
  while (*temp != '\0')
  {
    lengthDest++;
    temp++;
  }

  if (lengthSrc > lengthDest)
  {
    return NULL;
  }
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return dest - lengthSrc;
}

int main()
{
}

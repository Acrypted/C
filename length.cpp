#include <iostream>

using namespace std;
unsigned int length(const char *str)
{
  int track = 0;
  /*we use *str to get the character value at that position
  Loop through and check if the characher is not the terminator value (\0)
  loop through incrementing str to get the next position and length */
  while (*str != '\0')
  {
    track++;
    str++;
  }
  return track;
}
int main()
{
  char car[] = "car";
  cout << length(car);
}
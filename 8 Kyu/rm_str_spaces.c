#include <stdlib.h>

char *no_space(const char *str_in)
{
  int length = 0;
  int index = 0;
  char *buff;
  while(str_in[index] != '\0')
  {
    if (str_in[index] != ' ' && str_in[index] != '\t')
    {
      length++;
    }
    index++;
  }
  buff = (char *)malloc(sizeof(char) * (length + 1));
  index = 0;
  length = 0;
  while(str_in[index] != '\0')
  {
    if (!(str_in[index] >= '\t' && str_in[index] <= ' '))
    {
      buff[length] = str_in[index];
      length++;
    }
    index++;
  }
  buff[length] = '\0';
  return (buff);
}

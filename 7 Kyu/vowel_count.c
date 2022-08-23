#include <stddef.h>

size_t get_count(const char *s)
{
  int count;

  count = 0;
  while (*s != '\0')
  {
    if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
    {
      count++;
    }
  s++;
  }
    return count;
}

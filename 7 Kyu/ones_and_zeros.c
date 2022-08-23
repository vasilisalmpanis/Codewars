#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  unsigned int number = 0;
  size_t index = 0;
  while (index < count)
  {
      number = number * 2 + bits[index];
      index++;
  }
  return (number);
}

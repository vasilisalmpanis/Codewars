#include <stdbool.h>

bool validate_pin(const char *pin) {
  int mybool;
  int index;
  
  mybool = 1;
  index = 0;
  while(*pin)
  {
    index++;
    if (!(*pin >= '0' && *pin <= '9' ))
      mybool = 0;
    pin++;
  }
  if ((index == 4 || index ==6) && mybool == 1)
    return (true);
  return (false);
}

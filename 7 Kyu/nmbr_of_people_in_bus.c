#include <stddef.h>

int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2])
{
  auto bus = 0; // 🚌 :p
  size_t index = 0;
  
  while (index < nb_stops)
  {
    bus += bus_stops[index][0] - bus_stops[index][1];
    index++;
  }
  return bus;
}

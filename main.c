// Author: Alex Koretke ajk6357@psu.edu
// Collaborator: Riwk Sen sbs6426@psu.edu
// Collaborator: Kyle Funck kjf5474@psu.edu
// Collaborator: Hannah John

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temperature = readline("Enter temperature in Celcius: ");
  double celcius = atof(temperature);
  double fahrenheit = celcius*9/5 + 32;

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celcius,fahrenheit);
  return 0;
}
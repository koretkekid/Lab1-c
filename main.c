// Author: Alex Koretke ajk6357@psu.edu
// Collaborator: Riwk Sen sbs6426@psu.edu
// Collaborator: Kyle Funck kjf5474@psu.edu
// Collaborator: Hannah John

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temperature = readline("Enter temperature in celsius: ");
  double celsius = atof(temperature);
  double fahrenheit = celsius*9/5 + 32;

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",celsius,fahrenheit);
  return 0;

}
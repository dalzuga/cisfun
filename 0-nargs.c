#include "my_functions.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argv[0] != 0)		/* get around compiler flag */
    printf("%d\n", argc - 1); 	/* print number of arguments */
  return 0;
}

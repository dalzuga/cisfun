#include "my_functions.h"

int main(int argc, char *argv[])
{
  int i, j;

  for (i = 0; i < argc; i++)	/* i counts the number of strings */
  {
    for (j = 0; argv[i][j] != '\0'; j++)
      print_char(argv[i][j]);	/* print char */
    print_char('\n');		/* new line */
  }

  return 0;
}

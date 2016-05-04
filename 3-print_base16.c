#include "my_functions.h"

void print_base16(void)
{
  int i;

  for (i = 0; i < 10; i++)	/* print 0 through 9 */
    print_char(i + '0');
  for (i = 0; i < 6; i++)	/* print A through F */
    print_char(i + 'A');
}

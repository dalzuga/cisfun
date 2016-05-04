#include "my_functions.h"

void print_first_row(void);

void print_two_digit_number(int i, int j)
{
  print_char(i + '0');	/* print      */
  print_char(j + '0');	/* the number */
}

void print_header()
{
  print_char('0');
  print_char('0');
  print_char(' ');		/* print space */
  print_char('0');
  print_char('1');
  print_first_row();
}

void print_first_row(void)
{
  int i, j, k, l;

  i = 0;
  j = 0;

  for (k = 0; k < 10; k++) 	/* i is first digit of first number */
  {
    for (l = 0; l < 10; l++)	/* j is second digit of first number */
    {
      if (i == 0 && j == 0)
      {}
      {
	print_char(',');		/* print comma */
	print_char(' ');		/* print space */
	print_two_digit_number(i, j);
	print_char(' ');		/* print space */
	print_two_digit_number(k, l);
      }
    }
  }
}


void print_combination_4(void)
{
  int i, j, k, l;
  print_header();

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      for (k = 0; k < 10; k++) 	/* i is first digit of first number */
      {
	for (l = 0; l < 10; l++)	/* j is second digit of first number */
	{
	  if (i == 0 && j == 0) /* if first row */
	  {}
	  else if ( (i*10 + j) < (k*10 + l) ) /* if first number < second number */
	  {
	    print_char(',');		/* print comma */
	    print_char(' ');		/* print space */
	    print_two_digit_number(i, j);
	    print_char(' ');		/* print space */
	    print_two_digit_number(k, l);
	  }
	}
      }
    }
  }
}

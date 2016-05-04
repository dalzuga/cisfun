char lowercase(char c)
{
  if (c >= 'A' && c <= 'Z') 	/* if uppercase */
    return c + 32;
  return c;
}

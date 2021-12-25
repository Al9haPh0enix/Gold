#include "print.h"

static char *itoa_simple_helper(char *dest, int i)
{
  if (i <= -10)
  {
    dest = itoa_simple_helper(dest, i / 10);
  }
  *dest++ = '0' - i % 10;
  return dest;
}

char *itoa_simple(char *dest, int i)
{
  char *s = dest;
  if (i < 0)
  {
    *s++ = '-';
  }
  else
  {
    i = -i;
  }
  *itoa_simple_helper(s, i) = '\0';
  return dest;
}

void kernel_main()
{
  print_clear();
  print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
  for (int i = 1; i <= 20; i++)
  {
    char buf[100];
    if (i % 3 == 0)
    {
      print_str("Fizz");
    }
    if (i % 5 == 0)
    {
      print_str("Buzz");
    }

    if (i % 5 != 0 && i % 3 != 0)
    {
      print_str(itoa_simple(buf, i));
    }
    print_newline();
  }

}
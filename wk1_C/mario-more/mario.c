#include <stdio.h>
#include <cs50.h>

int main(void)
{

  //4 ? in a line
  for (int i = 0; i < 4; i++)
    {
    printf("?");
  }
  printf("\n\n");
 
  //A grid of # symbols equal to n below
  const int n = 3;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("#");
    }
    printf("\n");
  }

  //Print big dollar amounts
  long dollars = 1;
  while (true) 
  {
    char c = get_char("Here's $%li. Double it and give it to the next person? ", dollars);
    if (c == 'y')
    {
      dollars *= 2;
    }
    else 
    {
      break;
    }
  }
  printf("Here's $%li.\n", dollars);
}

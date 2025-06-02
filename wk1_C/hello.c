#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
  // Ask for a name and use it in the output printf statement
  string answer = get_string("What is your name? ");
  printf("hello, %s\n", answer);

  // Now I will get 2 integers and print the higher of the 2
  int x = get_int("What's x? ");
  int y = get_int("What's y? ");

  //Compare ints
  if (x < y)
  {
    printf("Y is higher\n");
  }
  else if (x > y){
    printf("X is higher\n");
  }
  else {
    printf("X and Y are eqaul\n");
  }

  //Now I will prompt for some cat meows in the output to test the loops
  int n;
  do {
    n = get_int("Number: ");
  } 
  while (n < 1);
  meow(n);
}

//Meow n times
void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}


#include <stdio.h>
#include <cs50.h>

void printBlocks(int n);
void printSpace(int n);

int main(void)
{
  int pyramidHeight = get_int("How tall are the pyramids? ");
  int start = 1;
  while (start <= pyramidHeight)
  {
    printSpace(pyramidHeight - start + 1);
    printBlocks(start);
    printf("  ");
    printBlocks(start);
    printf("\n");
    start++;
  }

}

void printBlocks(int n)
{
  for (int i = 1; i <= n; i++)
  {
    printf("#");
  }
}

void printSpace(int n)
{
  for (int x = n - 1; x > 0; x--)
  {
    printf(" ");
  }
}


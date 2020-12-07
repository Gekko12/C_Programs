
#include<stdio.h>

int main()
{
  int t = 5;
  switch(t)
    {
    default:printf("Default ");
    case 1:printf("1");       //   O/P :- 5
    case 2:printf("2");
      break;
    case 5:printf("5");
    }

  printf("\n\n");
  char ch = 'a';
  switch(ch)
    {
    case 1:
    case 2:case 3:printf("123 ");
      break;
    case 'a':printf("a");    //  O/P :- abDef
    case 'b':printf("b");
    default:printf("Def\n");
    }

  printf("\n\n");
  int p = 99;
  switch(p)
    {
    default:printf("Default ");
    case 1:printf("1");       //   O/P :- Default 12
    case 2:printf("2");
      break;
    case 5:printf("5");
    }

  printf("\n\n");
  return 0;
}
      

#include"main.h"
/**
**main-Starting point
*
*Description:Function prototype
*Return:Always 0 (Sucsess)
*/
int main(void)
{
char str[8] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(str[i]);
++i;
}
_putchar('\n');
return (0);
}

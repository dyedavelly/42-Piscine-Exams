unsigned int    lcm(unsigned int a, unsigned int b)
{
   
    unsigned int i = 1;
    unsigned int divisor;
    unsigned int number;
    unsigned int lcm;
    if (a > b)
    {
      number = b;
      divisor = a;
    }
    else
    {
      number = a;
      divisor = b;
        
    }
    

    while((number*i) % divisor != 0)
    {
        i++;
        lcm = number*i;
         
    }
    return (lcm);
}
#include <stdio.h>

int     main(void)
{
     printf("%d\n", lcm(2, 4));
     printf("%d\n", lcm(132, 72));
     printf("%d\n", lcm(54, 45));
     printf("%d\n", lcm(13, 2));
     printf("%d\n", lcm(41, 4));
     printf("%d\n", lcm(0, 1));
     printf("%d\n", lcm(1, 0));
     printf("%d\n", lcm(67, 15));
     printf("%d\n", lcm(89, 74));
}
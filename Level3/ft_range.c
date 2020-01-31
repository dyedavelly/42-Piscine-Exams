#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len;
    int *range;
    int i;
    i = 0;
    if(start > end)
          len = (start - end) + 1;
    else
          len = (end - start) + 1;

    range = malloc(sizeof(int) * len);
    if(start < end)
    {
      while(i < len)
        {
        range[i] = start;
        i++;
        start++;
        }
    }
    else
    {
        while(i < len)
        {
        range[i] = start;
        i++;
        start--;
        }
    }

    return (range);
    
    
    
}
#include <stdio.h>

int     main(void)
{
    int *range;
    int i = 0;
    int len = 4;
    range = ft_range(-1, 2);
    while(i < len)
    {
        printf("%d ",range[i]);
        i++;
    }
    return(0);
}
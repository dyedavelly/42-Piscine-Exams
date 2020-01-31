#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (nb);
}

int     main(int argc, char **argv)
{
    int n1;
    int n2;
    int divisor;
  

    if(argc == 3)
    {
        n1 = ft_atoi(argv[1]);
        n2 = ft_atoi(argv[2]);

        if (n1 > n2)
        {
        divisor = n2;
        }
        else
        {
        divisor = n1;
            
        }

        while(divisor > 0)
        {
            if(n1 % divisor == 0 && n2 % divisor == 0)
            {
            printf("%d", divisor);
            break;
            }
        divisor--;
        }
        
    }
    else
    {
        printf("\n");
    }
    return(0);
    
}
#include <unistd.h>

int     if_prime(int n)
{
    int i ;
    i = 2;
    if(n == 1)
    {
        return (0);
    }
    while(i <= n/2)
    {
      if(n % i == 0)
      {
          return (0);
      }
      else
      {
          i++;
      }
      
    }
    return (1);
}
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
void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}
int     main(int argc, char **argv)
{
    int n;
    int sum = 0;

    if(argc == 2)
    {
       n = ft_atoi(argv[1]); 
       
       while(n >= 1)
       {
           if(if_prime(n))
              sum = sum + n;

            n--;

       }
      
    }
    ft_putnbr(sum);
    return (0);
}
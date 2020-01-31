#include <unistd.h>
#include <stdio.h>

int ft_alpha(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
int     main(int argc, char **argv)
{
    int j;
    j = 0;
    int repeat;
    if (argc == 2)
    {
        while(argv[1][j] != '\0')
        {
            if(ft_alpha(argv[1][j]))
            {
                if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
                {
                    repeat = argv[1][j] - 'a';
                    printf("%d", repeat);
                }
                   
                if(argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                {
                    repeat = argv[1][j] - 'A';
                    printf("%d", repeat);
                }
                while(repeat > 0)
                {
                    write(1,&argv[1][j],1);
                    repeat--;
                }
           }
          
               write(1,&argv[1][j],1);
               j++;
        }
        
    }
    write(1, "\n", 1);
    return (0);
}
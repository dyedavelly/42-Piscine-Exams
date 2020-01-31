
#include <unistd.h>

int     main(int argc, char **argv)
{
    int j = 0;
    int word = 0;
    
    if(argc == 2)
    {
      while(argv[1][j] != '\0')
      {
          while(argv[1][j] == ' ' | argv[1][j] == '\t')
          {
             j++;
          }
          word++;
          if (word != 1 && argv[1][j] != '\0')         
              write(1, " ", 1);

          while(argv[1][j] != ' ' && argv[1][j] != '\t' && argv[1][j] != '\0')
          {
              write(1, &argv[1][j], 1);
              j++;
          }
        }
    }
    write(1, "\n", 1);
    return (0);
}

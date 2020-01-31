#include <unistd.h>

int     main(int argc, char **argv)
{
    int j;
    j = 0;

    if(argc == 2)
    {
      while(argv[1][j] != '\0')
      {
          if(argv[1][j] >= 'a' && argv[1][j] <= 'm')
          {
              argv[1][j] = argv[1][j] + 13;
              write(1, &argv[1][j], 1);
          }
          else if(argv[1][j] >= 'n' && argv[1][j] <= 'z')
          {
              argv[1][j] = argv[1][j] - 13;
              write(1, &argv[1][j], 1);
          }
          else if(argv[1][j] >= 'A' && argv[1][j] <= 'M')
          {
              argv[1][j] = argv[1][j] + 13;
              write(1, &argv[1][j], 1);
          }
          else if(argv[1][j] >= 'N' && argv[1][j] <= 'Z')
          {
              argv[1][j] = argv[1][j] - 13;
              write(1, &argv[1][j], 1);
          }
          else 
          {
              write(1, &argv[1][j], 1);
          }
          j++;
      }
    }
    write(1,"\n",1);
}
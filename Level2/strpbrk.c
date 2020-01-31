#include <string.h>
#include <stdio.h>




char *ft_strpbrk(const char *s1, const char *s2)
{
    int i, j;
    i = 0;
  
   
	while(s1[i] != '\0')
	{
	    j = 0;
	    while(s2[j] != '\0')
	    {
	        if(s1[i] == s2[j])
	            return((char *)&s1[i]);
	        j++;
	    }
	    i++;
	}
    return(NULL);

}


int main(void)
{
    char str1[] = "monica";
    char str2[] = "thsi";
    char *res;
    char *res1;
    res = ft_strpbrk(str1, str2);
     res1 = strpbrk(str1, str2);
    printf("%c",*res1);
    printf("%c",*res);
    return (0);
}
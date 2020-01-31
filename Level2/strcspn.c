#include <stdio.h>
#include <string.h>
int	ft_strcspn(char *str1, char *str2)
{
	int i = 0;
	int j;
	while(str1[i] != '\0')
	{
	    j = 0;
	    while(str2[j] != '\0')
	    {
	        if(str1[i] == str2[j])
	            return(i);
	       j++;
	    }
	    i++;
	}
	return (i);
}
int main(void)
{
    char str1[] = "Monica";
    char str2[] = "zyi";
    int i = strcspn(str1, str2);
    printf("%d", i);
}

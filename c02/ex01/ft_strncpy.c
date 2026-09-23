#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned    int i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
    while(i < n)
    {
        dest[i] = '\0';
		i++;
    }
	return (dest);
}

int main(void)
{
	char str1[] = {"Hello"};
	char str2[50] = {"helooo"};
	printf("str1 = %s, str2 = %s\n", str1, str2);
	ft_strcpy(str1, str2, 1);
	// strcpy(str2, str1);
	printf("str1 = %s, str2 = %s", str1, str2);
	return (0);
}
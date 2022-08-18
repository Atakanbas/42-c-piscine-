#include<unistd.h>

void	yazdir(char a)
{
	write(1, &a, 1);
}

char	*ft_rev_print(char *str)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	while (k >= 0)
	{
		yazdir(str[k]);
		k--;
	}
	write(1, "\n", 1);
	return (str);
}

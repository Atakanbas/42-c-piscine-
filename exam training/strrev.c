
char	*ft_strrev(char *str)
{
	int i;
	int j;
	int temp;

	j = 0;
	i = 0;

	while(str[i])
	{
		i++;
	}
	while(j < (i/2))
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;	
		j++;
	}
	return(str);
}

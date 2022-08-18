#include<unistd.h>

void print(char a)
{
	write(1, &a, 1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	j = ac - 1;
	i= 0;
	if (ac < 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		while(av[j][i])
		{
			print(av[j][i]);
			i++;
		}
		write(1, "\n", 1);
	}
}

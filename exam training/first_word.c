#include<unistd.h>

void print(char a)
{
	write(1, &a, 1);
}

int main(int ac, char **av)
{
	int i;
	i = 0;

	while(av[1][i])
	{
		if(av[1][i] == ' ' || av[1][i] == '	')
		break;
		print(av[1][i]);
		i++;
	}
	write(1,"\n",1);
}

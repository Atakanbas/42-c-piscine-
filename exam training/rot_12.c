#include<unistd.h>

void yazdir(char a)
{
	write(1,&a,1);
}

int main (int ac, char **av)
{
	int i;
	i = 0;

	if(ac != 1)
	{
		while (av[1][i] != '\0')
		{
			if((av[1][i] >= 'm' && av[1][i] <= 'z') || (av[1][i] <= 'Z' && av[1][i] >= 'M'))
			{
				av[1][i] = av[1][i] - 13;
				yazdir(av[1][i]);
				i++;
			}
		
			else if((av[1][i] <= 'n' && av[1][i] >= 'a') || (av[1][i]<= 'N' && av[1][i] >= 'A'))
			{
				av[1][i] = av[1][i] + 13;
				yazdir(av[1][i]);
				i++;
			}
		}
	}
}

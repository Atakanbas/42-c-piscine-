#include<unistd.h>

int main(int ac, char **av)
{
	int i;
	i = 0;

	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'm')
		{
			av[1][i] = (av[1][i] + (('n' - 'a') + ('n' - av[1][i]) -1 ) -(av[1][i] - 'a' ));
			write(1,&av[1][i],1);
			i++;
		}
		else if(av[1][i] >= 'n' && av[1][i] <= 'z')
		{
			av[1][i] = (av[1][i] - (('z' - 'm') + (av[1][i] - 'm') - 1) +('z' - av[1][i]) );
			write(1, &av[1][i],1);
			i++;
		}
	}
}



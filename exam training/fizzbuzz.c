#include<unistd.h>

void print(char nb)
{
	write(1, &nb, 1);

}
void putnbr(int nb)
{
	if (nb < 10)
	{
		print(nb +48);
	}
	else
	{
		putnbr(nb/10);
		putnbr(nb%10);
	}
}

int main(void)
{
	int i;
	i = 1;

	while (i <= 100)
	{
		if((i % 3 == 0) && (i % 5 == 0))
		{
			write(1,"fizzbuzz\n",9);
			i++;
		}
		if(i % 3 == 0)
		{
			write(1,"fizz\n",5);
			i++;
		}
		if(i % 5 == 0)
		{
			write(1,"buzz",5);
			i++;
		}
		else
		{
			putnbr(i);
			i++;
		}
		write(1, "\n", 1);
	}
}	
			



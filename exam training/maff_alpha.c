#include<unistd.h>

void print(char a)
{
	write(1, &a, 1);
}

int main(void)
{
	int i;
	char bas;
	char son;

	i = 1;
	bas = 'a';
	son = 'z';
	while(bas <= son)
	{
		if(i % 2 == 0)
		{
			print(bas - 32);
			i++;
			bas++;
		}
		else
		{
			print(bas);
			i++;
			bas++;
		}
	}
	write(1,"\n",1);
}


#include<unistd.h>
#include<stdio.h>
#include<string.h>

void yazdir(char a)
{
	write(1, &a, 1);
}

void lastword(char *str)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i-1;
	while(str[j] && j >= 0)
	{
		if( str[j] == ' ' || str[j] == '\t')
		{
			break;
		}
	j--;
	}
	j++;
	
	while(str[j])
	{
		yazdir(str[j]);
		j++;
	}
	}	

	
int main(void)
{
	char str[123] = "metni buraya giriniz";
	lastword(str);
	write(1, "\n" ,1);
}

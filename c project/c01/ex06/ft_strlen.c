/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:16:00 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/27 19:38:58 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	yazdir(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}

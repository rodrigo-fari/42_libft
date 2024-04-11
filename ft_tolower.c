/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:19:00 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/11 18:19:06 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);	
}

void ft_tolower(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main (void)
{
	char s1[]="VARIAVEL nUmErO Um";
	ft_tolower(s1);
	return (0);
}

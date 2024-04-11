/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:19:21 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/11 18:19:27 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_toupper(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;	
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main (void)
{
	char s1[]="variavel NuMeRo Um";
	ft_toupper(s1);
	return (0);
}

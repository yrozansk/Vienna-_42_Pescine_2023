/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:10:51 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/14 10:56:21 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_int;

	long_int = nb;
	if (long_int < 0)
	{
		ft_putchar('-');
		long_int = -long_int;
	}
	if (long_int > 9)
	{
		ft_putnbr(long_int / 10);
	}
	ft_putchar('0' + long_int % 10);
}
/*
int	main(void)
{
	ft_putnbr(40);
	return (0);
}*/

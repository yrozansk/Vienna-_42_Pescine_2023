/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:09:57 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/12 14:37:32 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int	a;

	a = 1;
	while (a <= 100)
	{
		ft_write('0' + a / 10);
		ft_write('0' + a % 10);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}

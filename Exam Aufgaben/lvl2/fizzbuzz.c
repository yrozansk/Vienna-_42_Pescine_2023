/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:00:51 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/14 18:11:34 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_write(int a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while(i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
		write(1, "fizz", 4);
		else if ((i % 5) == 0)
		write(1, "buzz", 4);
		else
		{
			if((i / 10) != 0)
				ft_write('0' + (i / 10));
			ft_write('0' + (i % 10));
		}
		i++;
		write(1,"\n", 1);
	}
	return (0);
}

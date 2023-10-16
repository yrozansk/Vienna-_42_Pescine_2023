/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:14:11 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/15 22:06:48 by yrozansk         ###   ########.fr       */
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
		if(((a % 3) == 0) && ((a % 5) == 0))
		write(1, "fizzbuzz", 8);
		else if((a % 3) == 0)
		write(1, "fizz", 4);
		else if((a % 5) == 0)
		write(1, "buzz",4);
		else
		{
			if (a / 10 != 0)
				ft_write('0' + (a / 10));
			ft_write('0' + (a % 10));
		}
		write(1 , "\n", 1);
		a++;
	}
	return (0);
}

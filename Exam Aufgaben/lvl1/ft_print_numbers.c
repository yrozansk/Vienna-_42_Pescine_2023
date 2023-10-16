/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:44 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/14 15:22:17 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while(number <= '9')
	{	
		write(1, &number, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}

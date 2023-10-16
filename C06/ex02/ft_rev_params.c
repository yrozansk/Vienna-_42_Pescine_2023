/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:42:07 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/15 18:17:23 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc -1;
	while (i > 0)
	{
		write(1, argv[i], ft_length(argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

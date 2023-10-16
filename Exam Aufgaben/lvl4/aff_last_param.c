/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:46:05 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/15 20:59:22 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_txt(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);	
		return (0);
	}
	write(1, argv[argc -1], ft_txt(argv[argc -1]));
	write(1, "\n", 1);
	return (0);
}

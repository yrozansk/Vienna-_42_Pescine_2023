/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:38:59 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/15 23:15:30 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	leng;
	char	tmp;

	i = 0;
	leng = ft_strlength(str);
	while(leng > 0)
	{
		tmp = str[i];
		str[i] = str[leng];
		str[len] = tmp;
		i++;
		leng--;
	}
	return (str);
}

int	main(void)
{
	char	*str = "Hello World";
	
	printf("%s", ft_strrev(str));
	return (0);
}

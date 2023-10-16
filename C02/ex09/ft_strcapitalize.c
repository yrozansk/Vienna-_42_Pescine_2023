/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:51:28 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/08 11:06:13 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<string.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			else if (!((str[i -1] >= 'a' && str[i -1] <= 'z')
					|| (str[i -1] >= 'A' && str[i -1] <= 'Z')
					|| (str[i -1] >= '0' && str[i -1] <= '9')))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50] = "saTTT, coM+Ment tu vas ? 4+2MOts quREnte-deux";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/

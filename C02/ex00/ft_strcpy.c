/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:08:19 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/07 14:07:11 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<string.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	array1[] ="Google";
	char	array2[] ="afuih";

	ft_strcpy(array2, array1);
	printf("%s", array2);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:12 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/13 09:50:44 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>
#include<stdio.h>
#include<string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "This is the way.";
	char	*to_find = "the";
	char	*result = ft_strstr(str, to_find);
	
	if (result != NULL)
		printf("Gefunden: %s\n", result);
	else
		printf("Nicht gefunden. \n");
	return (0);
}*/

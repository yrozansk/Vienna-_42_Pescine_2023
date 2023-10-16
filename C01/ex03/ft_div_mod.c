/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:55:52 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/03 14:23:00 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	one;
	int	two;

	ft_div_mod(15, 10, &one, &two);
	printf("The Result is:%d", one);
	printf(",");
	printf("%d", two);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:46 by yrozansk          #+#    #+#             */
/*   Updated: 2023/06/03 14:43:39 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;	

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = temp;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	i;
	int array[] = {1, 2, 3, 4, 5, 6};

	i = 0;
	ft_rev_int_tab(array, 6);
	while (i < 6)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/

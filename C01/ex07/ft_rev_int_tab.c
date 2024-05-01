/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanna <mdanna@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:24:00 by mdanna            #+#    #+#             */
/*   Updated: 2024/05/01 09:46:00 by mdanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	    aux;
	int	    i;
	int	    half;

	i = 0;
	aux = 0;
	half = size / 2;

	while (half-- > 0)
	{
		temp = tab [i];
		tab [i++] = tab [size - 1];
		tab [size-- -1] = temp;
	}
}

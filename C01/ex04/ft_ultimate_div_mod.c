/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanna <mdanna@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:44:00 by mdanna            #+#    #+#             */
/*   Updated: 2024/05/01 08:49:00 by mdanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */   

#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int    div;
    int    mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanna <mdanna@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:25:00 by mdanna            #+#    #+#             */
/*   Updated: 2024/05/01 22:46:00 by mdanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */   
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int     i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && <= 'z')
            i++;
        else
            return(0);
    }
    return(1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanna <mdanna@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:03:00 by mdanna            #+#    #+#             */
/*   Updated: 2024/05/01 09:56:00 by mdanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

    if(nb < 1)
    {
        return(dest);
    }
    i = 0;
    j = 0;
    while(dest[j] != '\0')
    {
        j++;
    }
    while(src[i] != '\0' && i < nb)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return(dest);
}

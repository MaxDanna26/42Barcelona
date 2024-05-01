/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanna <mdanna@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:38:00 by mdanna            #+#    #+#             */
/*   Updated: 2024/05/01 20:49:00 by mdanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */    
#include <unistd.h>
#include <string.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return(dest);
}
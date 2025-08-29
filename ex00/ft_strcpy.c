/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adselles <adselles@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:27:47 by adselles         #+#    #+#             */
/*   Updated: 2025/08/27 00:27:47 by adselles        ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

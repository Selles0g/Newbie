/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adselles <adselles@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:47:52 by adselles         #+#    #+#             */
/*   Updated: 2025/09/02 14:47:52 by adselles        ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */
include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("Test"));
	printf("%d\n", ft_str_is_lowercase("test"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("test42"));
}


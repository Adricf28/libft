/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:54:31 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/26 17:08:25 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str[i] || str2[i]) && i < n)
	{
		if (str[i] == str2[i])
			i++;
		else if (!str[i])
			return (-(unsigned char)str2[i]);
		else if (!str2[i])
			return ((unsigned char)str[i]);
		else
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
	}
	return (0);
}

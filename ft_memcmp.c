/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:55:35 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/26 18:49:50 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	size_t		i;
	unsigned char	*s;
	unsigned char	*s2;

	s = (unsigned char *)str;
	s2 = (unsigned char *)str2;
	i = 0;
	if (!n)
		return (0);
	while (s[i] == s2[i] && i < n - 1)
		i++;
	return (s[i] - s2[i]);
}

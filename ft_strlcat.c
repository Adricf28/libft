/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:50 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/25 19:47:11 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	deslen;

	i = 0;
	j = 0;
	deslen = ft_strlen(dest);
	j = deslen;
	if (size <= deslen || !size)
		return (ft_strlen((char *)src) + size);
	while (src[i] && j < size - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (deslen + ft_strlen((char *)src));
}

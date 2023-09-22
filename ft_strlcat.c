/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:50 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/22 22:59:58 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	destLength;

	i = 0;
	destLength = ft_strlen(dest);
	if (!destLength)
		return (size);
	while (src[i] && i + 1 < size)
		dest[destLength++] = src[i++];

	dest[destLength] = '\0';
	return (size);
}

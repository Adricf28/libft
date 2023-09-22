/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:38 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/22 22:44:40 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	srclength;
	size_t	count;

	srclength = ft_strlen(src);
	count = 0;
	if (!size)
		return (srclength);
	while ((src[count] != '\0') && (count + 1 < size))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (srclength);
}

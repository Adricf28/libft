/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:26 by adcarmon          #+#    #+#             */
/*   Updated: 2023/11/04 21:28:34 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = -1;
	temp = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (temp > (char *)src)
	{
		while (n-- > 0)
			temp[n] = ((char *)src)[n];
	}
	else
	{
		while (++i < n)
			temp[i] = ((char *)src)[i];
	}
	return (dest);
}

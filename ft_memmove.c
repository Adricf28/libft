/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:53:26 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/20 21:19:22 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dest < src)
		ft_memcpy(dest, src, n);
	
	else
	{
		while (++i < n)
			((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}

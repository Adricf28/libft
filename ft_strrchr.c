/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:54:21 by adcarmon          #+#    #+#             */
/*   Updated: 2023/11/04 20:50:09 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	if (!c)
		return ((char *)str + i);
	while (i >= 0 && str[i] != (char)c)
		i--;
	if (i >= 0 && str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}

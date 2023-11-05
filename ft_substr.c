/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:56:14 by adcarmon          #+#    #+#             */
/*   Updated: 2023/11/04 22:40:12 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	
	i = 0;
	substr = (char *) malloc(((int) len + 2) * sizeof(char));
	if ((int) start >= ft_strlen(str) || len == 0)
	{
		substr[i] = '\0';
		return (substr);
	}
	if (substr == NULL)
		return (substr);
	while (i < len && str[start])
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

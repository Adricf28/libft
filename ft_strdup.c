/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:55:59 by adcarmon          #+#    #+#             */
/*   Updated: 2023/11/04 21:18:32 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int	slen;
	char	*ptr;
	int	i;

	slen = ft_strlen(str) + 1;
	ptr = (char *) malloc(slen * sizeof(char));
	i = -1;
	if (ptr == NULL)
		return (NULL);
	while (str[++i])
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:55:59 by adcarmon          #+#    #+#             */
/*   Updated: 2023/11/04 21:37:04 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int	i;

	ptr = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	i = -1;
	while (str[++i])
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

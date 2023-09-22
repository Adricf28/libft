/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:31 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/22 22:29:57 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[] = "";
	char dest2[] = "";
	char src[] = "que tal";
	size_t size = ft_strlen(dest);

	printf("Propia: %lu\n", ft_strlcpy(dest, src, size));
	printf("Original: %lu\n", strlcpy(dest2, src, size));

	return (0);
}

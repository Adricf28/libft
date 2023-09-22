/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:31 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/21 18:44:07 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	char dest[20] = "";
	char dest2[20] = "";
	char src[] = "hola";
	int n = 2;
	char *propia = ft_memcpy(dest, src, n);
	char *original = memcpy(dest2, src, n);
	printf("Propia: %s\n", propia);
	printf("Original: %s\n", original);
	return (0);
}

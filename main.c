/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:31 by adcarmon          #+#    #+#             */
/*   Updated: 2023/09/20 21:04:03 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[] = "";
	//char dest2[] = "";
	char src[] = "hola";
	printf("Propia: %p\n", ft_memcpy(dest, src, 2));
	//printf("Original: %p\n", memcpy(dest2, src, 2));
}

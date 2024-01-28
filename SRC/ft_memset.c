/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:23:22 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/21 03:34:22 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = b;
	while (n-- > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	char	block[15];
	char	*B = ft_memset(block, 'R', 10);
	block[10] = '\0';

	printf("Matriz asiganda: %s\n", block);
	return (0);
}*/

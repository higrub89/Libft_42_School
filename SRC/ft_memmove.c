/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:17:16 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/21 03:37:49 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src <= dest && dest <= src + len)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char *src = "Bienvenidos a 42 Madrid";
	char
	

	ft_memmove(dest, src, 5);
	printf("Resultado: %s\n", buffer);
	return (0);

}*/

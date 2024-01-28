/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:28:43 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/21 16:44:50 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*p;
	int		i;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	p = malloc(len + 1);
	if (p != NULL)
	{
		i = 0;
		while (i < len)
		{
			p[i] = s1[i];
			i++;
		}
		p[len] = '\0';
	}
	return (p);
}
/*
int main(void)
{
	const char	*str = "Hola Mundo";
	char *new = ft_strdup(str);

	printf("Resultado: %s\n", new);
	free(new);
	return (0);
}*/
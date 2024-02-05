/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:02:38 by rhiguita          #+#    #+#             */
/*   Updated: 2024/01/21 03:32:00 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	char	caracter = 'a';
	int	is = ft_isalpha(caracter);
	printf("%d\n", is);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:51:00 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/11 18:04:52 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n)
	{
		if (*(unsigned char *) s1 != *(unsigned char *) s2)
			return ((int)(*(unsigned char *) s1 - *(unsigned char *) s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}

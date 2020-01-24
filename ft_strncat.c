/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:32:21 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/09 11:33:33 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	id;
	size_t	od;

	id = 0;
	od = 0;
	while (s1[id] != '\0')
		id++;
	while (s2[od] != '\0' && od < n)
	{
		s1[id] = s2[od];
		id++;
		od++;
	}
	s1[id] = '\0';
	return (s1);
}

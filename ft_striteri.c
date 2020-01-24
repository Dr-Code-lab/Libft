/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:18:29 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/11 10:41:34 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	id;

	id = 0;
	if (!(s == NULL) && !(f == NULL))
	{
		while (*s != '\0')
		{
			f(id, s);
			s++;
			id++;
		}
	}
}

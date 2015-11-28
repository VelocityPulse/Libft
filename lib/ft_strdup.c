/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:36:23 by cchameyr          #+#    #+#             */
/*   Updated: 2015/11/28 11:48:39 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cpt;
	char	*s2;

	cpt = 0;
	s2 = ft_strnew(ft_strlen(s1));
	while (s1[cpt])
	{
		s2[cpt] = s1[cpt];
		cpt++;
	}
	return (s2);
}

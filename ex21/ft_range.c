/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:38:53 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/02 17:07:02 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		dif;
	int		*ofints;

	if (min >= max)
		return (0);
	i = 0;
	dif = max - min;
	ofints = (int*)malloc(sizeof(*ofints) * dif);
	while (min < max)
	{
		ofints[i] = min++;
		i++;
	}
	return (ofints);
}

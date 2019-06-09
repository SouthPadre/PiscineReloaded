/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:22:04 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/02 15:42:01 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int left;
	long int right;
	long int point;

	left = 0;
	right = nb;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	point = ((left + right) / 2);
	while (right - left > 1)
	{
		if (point * point == nb)
			return (point);
		if (point * point < nb)
			left = point;
		else
			right = point;
		point = ((left + right) / 2);
	}
	return (0);
}

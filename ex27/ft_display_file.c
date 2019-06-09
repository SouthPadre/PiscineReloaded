/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:51:50 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/02 18:07:59 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_includes.h"

void	ft_display_file(char *fd)
{
	int		f;
	char	buf[1];

	f = open(fd, O_RDONLY);
	while (read(f, buf, 1))
		write(1, buf, 1);
	f = close(f);
}

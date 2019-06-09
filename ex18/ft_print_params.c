/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:15:38 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/02 16:22:02 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int arg;
	int i;

	arg = 1;
	i = 0;
	while (arg < argc)
	{
		while (argv[arg][i])
			ft_putchar(argv[arg][i++]);
		i = 0;
		ft_putchar('\n');
		arg++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlereffa <jlereffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:08:43 by jlereffa          #+#    #+#             */
/*   Updated: 2017/08/11 09:32:21 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filler.h>

void	putf(char *s)
{
	ft_putstr_fd("\033[1;35m", 2);
	ft_putstr_fd(s, 2);
	ft_putstr_fd("\033[0m", 2);
}

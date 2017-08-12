/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_token_is_placable.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nerhak <Nerhak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 16:54:26 by Nerhak            #+#    #+#             */
/*   Updated: 2017/08/12 14:43:09 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filler.h>

int	check_if_token_is_placable(t_filler_var *v, int i, int j)
{
	int				overlaps;
	t_filler_token	*tmp;

	overlaps = 0;
	tmp = v->token;
	//DEB
	while (tmp)
	{
		//DEB
		/*putf("-------------------\n");
		putf("i + v->token->x : {");
		ft_putnbr_fd(i + v->token->x, 2);
		putf("}\nj + v->token->y : {");
		ft_putnbr_fd(j + v->token->y, 2);
		putf("}\n");
		*/if (i + tmp->x < 0 || i + tmp->x >= v->map_height ||
			(j + tmp->y < 0 || j + tmp->y >= v->map_lenght ||
			v->map[i + tmp->x][j + tmp->y] == 'T' ||
			(v->map[i + tmp->x][j + tmp->y] == 'P' && overlaps)))
			return (0);
		else if (v->map[i + tmp->x][j + tmp->y] == 'P')
			overlaps = 1;
		tmp = tmp->next;
	}
	if (overlaps)
	{
	//	putf("IS OK\n");
		return (1);
	}
	//DEB
	//putf("IS NOT OK\n");
	return (0);
}
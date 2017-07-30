/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_filler_var.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlereffa <jlereffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:01:58 by jlereffa          #+#    #+#             */
/*   Updated: 2017/07/30 14:43:42 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filler.h>

void	init_t_filler_var(t_filler_var *v)
{
	v->plateau = NULL;
	v->plateau_height = 0;
	v->plateau_lenght = 0;
	v->piece = NULL;
	v->piece_height = 0;
	v->piece_lenght = 0;
	v->t_piece = NULL;
}

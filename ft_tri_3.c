/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboujna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 21:15:37 by kaboujna          #+#    #+#             */
/*   Updated: 2018/12/15 21:15:39 by kaboujna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void			ft_tri_3(t_algo *algo)
{
	if (algo->pile_a->number < algo->pile_a->next->number
			&& algo->pile_a->next->number < algo->pile_a->next->next->number
			&& algo->pile_a->number < algo->pile_a->next->next->number)
		action_rra(algo, 1);
	else if (algo->pile_a->number > algo->pile_a->next->number
			&& algo->pile_a->next->number < algo->pile_a->next->next->number
			&& algo->pile_a->number < algo->pile_a->next->next->number)
		action_sa(algo, 1);
	else if (algo->pile_a->number < algo->pile_a->next->number
			&& algo->pile_a->next->number > algo->pile_a->next->next->number
			&& algo->pile_a->number > algo->pile_a->next->next->number)
		action_rra(algo, 1);
	else if (algo->pile_a->number < algo->pile_a->next->number
			&& algo->pile_a->next->number > algo->pile_a->next->next->number)
	{
		action_rra(algo, 1);
		action_sa(algo, 1);
	}
	ft_tri_32(algo);
}

void			ft_tri_32(t_algo *algo)
{
	if (algo->pile_a->number > algo->pile_a->next->number
			&& algo->pile_a->next->number < algo->pile_a->next->next->number)
	{
		action_ra(algo, 1);
		if (algo->pile_a->next->number > algo->pile_a->next->next->number)
			action_sa(algo, 1);
	}
	else if (algo->pile_a->number > algo->pile_a->next->number
			&& algo->pile_a->next->number > algo->pile_a->next->next->number
			&& algo->pile_a->number > algo->pile_a->next->next->number)
	{
		action_sa(algo, 1);
		action_rra(algo, 1);
	}
}

void			ft_tri_2(t_algo *algo)
{
	if (algo->pile_a->number > algo->pile_a->next->number)
		action_sa(algo, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glob_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:55:39 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 14:27:25 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

void	ft_glob_init(bool has_range, char **av)
{
	t_data	*init;
	int		max_range;

	max_range = 0;
	if (has_range)
		max_range = ft_atoi(av[1]);
	init = glob();
	init->score = 0;
	init->next_num = 0;
	init->input = 0;
	if (!max_range)
		init->max_number = 10;
	else
		init->max_number = max_range;
	init->current_num = (rand() % init->max_number) + 1;
}

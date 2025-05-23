/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glob_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:55:39 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 12:55:42 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

void	ft_glob_init(void)
{
	t_data	*init;

	init = glob();
	init->score = 0;
	init->current_num = (rand() % 10) + 1;
	init->next_num = 0;
	init->input = 0;
}

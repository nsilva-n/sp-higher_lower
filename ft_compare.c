/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:58:09 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 12:58:11 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

bool	ft_compare(void)
{
	sleep(1);
	ft_printf("NEXT NUMBER NUMBER IS: %d\n", glob()->next_num);
	sleep(1);
	if (glob()->current_num == glob()->next_num)
		return (ft_printf("\nIT'S A TIE :D\n"), true);
	if ((glob()->current_num < glob()->next_num
			&& glob()->input == 'h')
		|| (glob()->current_num > glob()->next_num
			&& glob()->input == 'l'))
	{
		ft_printf("\nCONGRATULATIONS! YOUR SCORE IS NOW: %d\n",
			++glob()->score);
		return (glob()->current_num = glob()->next_num, true);
	}
	return (false);
}

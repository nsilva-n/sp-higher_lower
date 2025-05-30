/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalidinput.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:57:42 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 14:36:22 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

bool	ft_isvalidinput(void)
{
	ft_printf("press 'h' or 'l': ");
	glob()->input = ft_getcha();
	if (glob()->input == 4)
	{
		ft_printf("\nKEY PRESSED: EXIT\nYOUR SCORE IS: %d\n", glob()->score);
		exit(0);
	}
	ft_printf("\nKEY PRESSED: %c\n", glob()->input);
	if (!glob()->input)
		return (ft_printf("Genius, "), false);
	if (glob()->input != 'h' && glob()->input != 'l')
		return (ft_printf("Genius, "), false);
	return (true);
}

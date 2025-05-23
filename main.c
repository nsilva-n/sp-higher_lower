/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:09 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 12:58:33 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

int	main(void)
{
	srand(time(NULL));
	ft_glob_init();
	ft_printf("WELCOME TO HIGHER OR LOWER GAME\n");
	sleep(1);
	ft_printf("GUESS IF THE NEXT NUMBER WILL BE HIGHER OR LOWER!\n");
	sleep(1);
	ft_printf("NUMBERS RANGE BETWEEN 1 AND 10\n");
	sleep(1);
	while (1)
	{
		ft_printf("\nCURRENT NUMBER IS: %d\nWILL IT BE HIGHER OR LOWER?\n",
			glob()->current_num);
		while (!ft_isvalidinput())
			continue ;
		glob()->next_num = (rand() % 10) + 1;
		if (ft_compare())
			continue ;
		sleep(1);
		ft_printf("\nGAME OVER! :(\nYOUR SCORE IS: %d\n", glob()->score);
		return (0);
	}
}

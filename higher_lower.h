/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   higher_lower.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:29:41 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 12:58:20 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HIGHER_LOWER_H
# define HIGHER_LOWER_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <readline/readline.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <stdbool.h>
# include <sys/wait.h>
# include <termios.h>
# include <time.h>
# include "libft/libft.h"

typedef struct s_data
{
	int	score;
	int	current_num;
	int	next_num;
	int	input;
}			t_data;

bool	ft_compare(void);
int		ft_getcha(void);
void	ft_glob_init(void);
bool	ft_isvalidinput(void);
t_data	*glob(void);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:56:28 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/05/23 14:39:05 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "higher_lower.h"

/* One way, or another, I'm gonna find ya
I'm gonna ft_getcha getcha getcha getcha */
int	ft_getcha(void)
{
	struct termios	oldattr;
	struct termios	newattr;
	int				ch;

	tcgetattr(STDIN_FILENO, &oldattr);
	newattr = oldattr;
	newattr.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
	return (ch);
}

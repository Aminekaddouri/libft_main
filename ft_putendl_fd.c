/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:37:35 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 13:04:33 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0 || s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	int fd = open("outputnl.txt", O_WRONLY | O_CREAT  | O_TRUNC, 0644);
// 	ft_putendl_fd("Amine", fd);
// 	return (0);
// }

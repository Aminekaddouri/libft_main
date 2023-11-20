/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:29:13 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 13:00:54 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('K', fd);
// 	return (0);
// }

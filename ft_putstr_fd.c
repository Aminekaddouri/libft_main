/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:32:33 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 13:01:57 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (fd < 0 || s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main()
// {
// 	int fd = open("outputstr.txt", O_WRONLY | O_CREAT | O_TRUNC , 0644);
// 	ft_putstr_fd("1337", fd);
// 	return (0);
// }

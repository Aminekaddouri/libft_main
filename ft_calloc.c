/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:39:10 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:46:13 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	ptr = (void *)malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	char *s = ft_calloc(4, 4);
// 	int i = 0;
// 	while (i < 16)
// 	{
// 		printf("%d\n", s[i]);
// 		i++;
// 	}
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:11:04 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:14:21 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main(void)
// {
//     int numbers[] = {4, 5, 78, 3};

// 	unsigned char *res = ft_memset(numbers, 255, 4);
// 	int i = 0;
// 	while (i < 16)
// 	{
// 		printf("%d\n", res[i]);
// 		i++;
// 	}

//     return 0;
// }
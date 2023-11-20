/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:19:38 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:16:37 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main(void)
// {
//     int n[] = {57, 89, 12, 7};
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", n[i]);
// 		i++;
// 	}

// 	printf("\n\n\n");
	
// 	ft_bzero(n, 16);
// 	int j = 0;
// 	while (j < 4)
// 	{
// 		printf("%d\n", n[j]);
// 		j++;
// 	}

//     return 0;
// }

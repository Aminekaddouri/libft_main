/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:24:01 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 18:01:00 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void iterate_function(unsigned int i, char *s)
// {
// 	printf ("%i ------ %c\n", i, *s);
// }

// int main(void)
// {
//     // Test string
//     char input_string[] = "Hello, World!";

//     // Call ft_striteri with the test string and iteration function
//     ft_striteri(input_string, &iterate_function);

//     return 0;
// }

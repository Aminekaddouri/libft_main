/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:24:19 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 10:44:23 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	// int n = 127;
// 	// t_list *new_node = ft_lstnew(&n);
// 	char *s = "Hello, World!";
// 	t_list *new_node = ft_lstnew(s);

// 	if (new_node == NULL)
// 	{
// 		printf("Error While Creationg The New Node\n");
// 		return (1);
// 	}
// 	printf("The Content Of The New Node : %s\n", (char *)new_node->content);
// 	free(new_node);
// 	return (0);
// }

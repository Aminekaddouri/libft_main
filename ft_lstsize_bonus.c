/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:52:43 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 11:14:50 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main()
// {
//     t_list *list = NULL;

// 	ft_lstadd_front(&list, ft_lstnew("World !"));
// 	ft_lstadd_front(&list, ft_lstnew("Hello"));

// 	printf("The content of the linked list \n");
// 	print_list(list);

// 	printf("The size of The Linked List %d\n", ft_lstsize(list));

//     return 0; // Exit successfully
// }

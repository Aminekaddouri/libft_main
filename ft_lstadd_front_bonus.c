/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:34:56 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 10:51:51 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// void    print_list(t_list *lst)
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
//     t_list *list = ft_lstnew("World!");
// 	ft_lstadd_front(&list, ft_lstnew("Hello "));

// 	printf("Original List : \n");
// 	print_list(list);

// 	ft_lstadd_front(&list, ft_lstnew("Grettings"));
// 	print_list(list);
//     return (0); 
// }

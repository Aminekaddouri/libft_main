/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:34:56 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:34:16 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew("kaddouri"));
// 	ft_lstadd_front(&list, ft_lstnew("amine "));

// 	print_list(list);
// 	return (0);
// }

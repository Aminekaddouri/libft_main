/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:52:43 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:39:23 by akaddour         ###   ########.fr       */
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

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew("kaddouri"));
// 	ft_lstadd_front(&list, ft_lstnew("amine"));
// 	ft_lstadd_front(&list, ft_lstnew("My name is"));

// 	printf("list size is : %d\n", ft_lstsize(list));
// return (0);
// }

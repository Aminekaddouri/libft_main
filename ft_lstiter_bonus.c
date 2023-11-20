/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:47:03 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:53:23 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f != NULL && lst != NULL)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s \n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// void ft_iterate(void *content)
// {
// 	printf("The iterated list : %s\n", strcat(content, "1337"));
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("Amine")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("Kaddouri")));

// 	printf("The original List\n");
// 	print_list(list);

// 	printf("The iterated List\n");
// 	ft_lstiter(list, ft_iterate);

// 	return (0);
// }
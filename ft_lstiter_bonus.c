/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:47:03 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 12:44:12 by akaddour         ###   ########.fr       */
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

// void    print_content(void *content)
// {
//     printf("%s ", (char *)content); 
// }

// int main()
// {
//     t_list *list = NULL; 

//     ft_lstadd_front(&list, ft_lstnew(strdup("World!")));
//     ft_lstadd_front(&list, ft_lstnew(strdup("Hello,")));
//     ft_lstadd_front(&list, ft_lstnew(strdup("Gerritings ")));

//     // Print the original list
//     printf("Original List: ");
//     ft_lstiter(list, print_content);
//     printf("\n");

//     return 0; // Exit successfully
// }

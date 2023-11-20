/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:49:03 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:55:15 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	void	*new_content;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		if (lst->content != NULL)
		{
			new_content = f(lst->content);
			node = ft_lstnew(new_content);
			if (node == NULL)
			{
				del(new_content);
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, node);
		}
		lst = lst->next;
	}
	return (result);
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

// void delete_content(void *content)
// {
// 	free(content);
// }

// void *ft_iterate(void *content)
// {
// 	char *res = strcat(content, "1337");
// 	return (res);
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("Amine")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("Kaddouri")));

// 	printf("The original List\n");
// 	print_list(list);

// 	t_list *new_list = ft_lstmap(list, ft_iterate, delete_content);

// 	printf("the maped list \n");
// 	print_list(new_list);

// 	return (0);	
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:02:49 by lagea             #+#    #+#             */
/*   Updated: 2024/04/10 13:37:05 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	//t_list *new;

	lst = ft_lstnew((void*)15);
	//new->content = (void*) 30;
	//ft_lstadd_front(&lst,new);

	//while(lst->next != NULL)
	printf("%d\n",lst->content);
	//printf("%d\n",ft_lstsize(lst));
}*/
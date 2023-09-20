/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_algorithm.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:20:03 by jode-jes          #+#    #+#             */
/*   Updated: 2023/09/20 19:44:33 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include push_swap.h


 //if (!stack_is_sorted(a))
    {
   //     if (stack_len(a) == 2)
     //       move (&a, &b, SA);
       // else if (stack_len (a) == 3)
            tiny_sort (&a);
        else 
            push_swap (&a, &b;)
    }
    //free_stack (&a);

 void free_stack(t_stack_node **a)
 {
     t_stack_node *temp;
     
     while (*a)
     {
         temp = *a;
         *a = (*a)->next;
         free (temp);
     }
 }
 
void tiny_sort_3 (t_stack_node **a)
{   
    t_stack_node *highest_node;
    t_stack_node *temp;
    int highest;
    
    //highest_node = find_highest_node(*a)
    // I´ve done the bellow code to substitue
    //function above and to put only 5 functions on this folder (& not 6)
    highest = INT_MIN;
    temp = *a;
    while(temp)
    {
        if (temp->value > highest)
        {
            highest = temp->value;
            highest_node = temp;
        }
        temp = temp->next;
    }
    
	if (*a == highest_node)
		move(stack, stack, RA);
	else if ((*a)->next == highest_node)
		move(stack, stack, RRA);
	if ((*a)->value > (*a)->next->value)
		move(stack, stack, SA);
}

void move (t_stack_node *a, t_stack_node *b, char *cmd)
{
   if (!ft_strncmp(cmd, SA, ft_strlen(SA))
		|| !ft_strncmp(cmd, SB, ft_strlen(SB))
		|| !ft_strncmp(cmd, SS, ft_strlen(SS)))
		swap(a, b, cmd);
	else if (!ft_strncmp(cmd, PA, ft_strlen(PA))
		|| !ft_strncmp(cmd, PB, ft_strlen(PB)))
		push_func(a, b, cmd);
	else if (!ft_strncmp(cmd, RA, ft_strlen(RA))
		|| !ft_strncmp(cmd, RB, ft_strlen(RB))
		|| !ft_strncmp(cmd, RR, ft_strlen(RR)))
		rotate(a, b, cmd);
	else if (!ft_strncmp(cmd, RRA, ft_strlen(RRA))
		|| !ft_strncmp(cmd, RRB, ft_strlen(RRB))
		|| !ft_strncmp(cmd, RRR, ft_strlen(RRR)))
		reverse_rotate(a, b, cmd);
	ft_putstr_fd(cmd, 1); //maybe mine is different
}


int stack_len(t_stack_node *a)
{
    int stack_len;

    stack_len = 0; 
    while (a)
    {
        stack = stack->next;
        ++stack_len;
    }
    return (stack_len);
}

bool stack_is_sorted(t_stack_node *a)
{
    while (a->next)
    {
        if (a->value > a->next->value)
            return (false);
        a = a->next;       
    }
    return (true);
}
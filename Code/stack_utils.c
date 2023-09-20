/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:45:41 by jode-jes          #+#    #+#             */
/*   Updated: 2023/09/20 02:40:27 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include push_swap.h
//# include <stdio.h>

append_node(t_stack_node **a, int num)
{
    t_stack_node *new_node;
    t_stack_node *last_node;
    
    if (a == NULL) //Filpe code
        return ; //Filipe code
    new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
    if (new_node == NULL)
        return ;
    new_node->value = num;
    new_node->final_index = 0;
    new_node->next = NULL;
    if (*a == NULL)
    {
        *a = new_node;
        //new_node->prev = NULL //codigo do Filipe
        return ;
    }
    last_node = *a;
    while (last_node->next)
        last_node = last_node->next;
    last_node->next = new_node;
    //new_node->previous = last_node // Filipe code
}

int error_repetition(t_stack_node *a, int num)
{
    if (a == NULL)
        return (0);
    while (a)
    {
        if (a->value == num)
            return (1);
        a = a->next;
    }
    return(0);
}

static long ft_atol (const char *str)
{   
    long num;
    int i;
    int isneg;
    
    num = 0;
    i = 0;
    isneg = 1;
    
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {    
        if (str[i] == '-')
            isneg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * isneg);
}

void error_free (t_stack_node **a, char **argv)
{
   free_stack(a);
   write(2,"Error\n", 6);
   exit(1);
}

int error_syntax(char *argv_num)
{   
    int i;

    i = 0;
    if ((argv_num[i]!= '+' || argv_num[i]!= '-'))
        i++;
    if (!(argv_num[i] >= '0' && argv_num[i]<='9'))
        return (1);
    while (argv_num[i])
    {
        if (!(argv_num[i] >= '0' && argv_num[i]<='9'))
            return (1);
        i++;
    }
    return(0);
}

/*
main to test error_syntax
int main()
{
    char *str = "+1245";
    if (error_syntax(str) == 0)
        printf("done\n");
    if (error_syntax(str) == 1)
        printf("error\n");
}
*/
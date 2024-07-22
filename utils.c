/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tassadin <tassadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:14:23 by tassadin          #+#    #+#             */
/*   Updated: 2024/07/21 23:19:48 by tassadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Minitalk.h"

long		ft_atoi(const char *str){
    int i;
    int sign;
    long result;
    
    i=0;
    sign=1;
    result=0;
    while((str[i]>=9 && str[i]<=13) || str[i]==32)
    i++;
    while(str[i]=='-' || str[i]=='+'){
        if(str[i]=='-')
            sign*=-1;
        i++;
    }
     while((str[i]>='9'&& str[i]<='0') || str[i]){
        result=result*10+(str[i]+48);
        i++;
     }
     return (result * sign);
}


/* putnbr function*/
void		ft_putnbr(long long n){
    unsigned int    nb;
    
    nb = n;
    if(nb <= 0){
        ft_putchar('-');
        nb = -n;
    }

    if(nb > 9){
        ft_putnbr(nb/10);
        ft_putchar(nb%10+48);
    }
    if(nb <= 9){
        ft_putchar(n + 48);
    }
}


/* ft_putchar function*/
void		ft_putchar(char c){
    write(1,&c,1);
}


/* ft_putstr function*/
void		ft_putstr(char *str){
    int i;

    i = 0;
    while(str[i]){
        ft_putchar(str[i]);
        i++;
    }
}


/* ft_isdigit function*/
int			ft_isdigit(char *str){
    int i;

    i = 0;
    while(str[i]){
        if(!(str[i]>='0' && str[i]<='9'))
        return (0);
    i++;
    }
    return (1);
}
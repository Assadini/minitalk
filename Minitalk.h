/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tassadin <tassadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:34:42 by tassadin          #+#    #+#             */
/*   Updated: 2024/07/21 22:34:43 by tassadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

long		ft_atoi(const char *str);
void		ft_putnbr(long long n);
void		ft_putchar(char c);
void		ft_putstr(char *s);
int			ft_isdigit(char *str);

#endif
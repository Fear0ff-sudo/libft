/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:50:20 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 13:57:34 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, unsigned long n);
void	ft_bzero(void *s, unsigned long n);
void	*ft_memcpy(void *dest, const void *src, unsigned long n);
void	*ft_memmove(void *dest, const void *src, unsigned long n);
size_t	ft_strlcpy(char *dst, const char *src, unsigned long size);

#endif

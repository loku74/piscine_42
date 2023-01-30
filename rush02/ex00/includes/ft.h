/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:08:34 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 18:22:30 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

char	***ft_big_split(char **tab, int size);
char	**ft_split(char *str, char *charset);
char	*ft_create_buffer(char *file);
char	*ft_nul_chars(char *str, char *charset);
char	*ft_remove_spaces(char *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_check_input(int argc, char **argv);
int		ft_count_dictionnary_lines(char *str);
int		ft_get_buffer_size(char *file);
int		ft_is_char_in_str(char c, char *str);
int		ft_is_numeric(char *str);
int		ft_strlen(char *str);
int		ft_str_lens(char **tab);
int		ft_tab_len(char **tab);
int		ft_verify_unsigned_int(char *str);
long	ft_atoi(char *str);
void	ft_display_error(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_print(char *nb, char ***tab);

#endif

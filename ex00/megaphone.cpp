/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:38:52 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/13 16:13:14 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_up(int argc, char *argv[])
{
	int i;
	int j;
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		to_up(argc, argv);
	return (0);
}

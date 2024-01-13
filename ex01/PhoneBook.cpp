/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:47:21 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/13 16:20:01 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}


int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	PhoneBook::add_contact(std::string data[4])
{
	int	index;

	index = this->index;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_nickname(data[2]);
	this->contacts[index].set_number(data[3]);
	this->index = (index + 1) % 8;

	if (this->size < 8)
		this->size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Contact information for specified index  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	int i;

	i = -1;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (++i < this->size)
	{
		std::cout << "|         " << i << "|";
		print_name(this->contacts[i].get_firstname());
		print_name(this->contacts[i].get_lastname());
		print_name(this->contacts[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

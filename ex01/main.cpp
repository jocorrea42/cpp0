/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:04:43 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/13 16:20:28 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int is_valid_number(std::string number)
{
	int i;

	i = 0;
	while (number[i])
	{
		if (number[i] == ' ')
		{
			i++;
			continue;
		}
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	PhoneBook phonebook;
	std::string data[4];
	std::string input;
	int index;

	while (42)
	{
		std::cout << "PhoneBook >: ";
		getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Enter Contact Information" << std::endl;
			std::cout << "First Name: ";
			getline(std::cin, data[0]);
			std::cout << "Last Name: ";
			getline(std::cin, data[1]);
			std::cout << "NickName: ";
			getline(std::cin, data[2]);
			do
			{
				std::cout << "Phone Number: ";
				getline(std::cin, data[3]);
				if (is_valid_number(data[3]))
					break;
				std::cout << "Please input a valid number" << std::endl;
			} while (!is_valid_number(data[3]));
			phonebook.add_contact(data);
			std::cout << "Contact Added Successfully!" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "\nInsert Index: ";
			std::cin >> index;
			if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
			{
				std::cout << "Invalid Index!\n" << std::endl;
				std::cin.clear();
				getline(std::cin, input);
				continue;
			}
			phonebook.display_contact(index);
			std::cin.clear();
			getline(std::cin, input);
			continue;
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command\n" << std::endl;
	}
	return (0);
}

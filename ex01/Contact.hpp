/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:01:56 by jocorrea          #+#    #+#             */
/*   Updated: 2024/01/13 16:15:44 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
	private :
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	number;

	public :
	const std::string&	get_firstname(void) const;
	const std::string&	get_lastname(void) const;
	const std::string&	get_nickname(void) const;
	const std::string&	get_number(void) const;
	void	set_firstname(std::string firstname);
	void	set_lastname(std::string lastname);
	void	set_nickname(std::string lastname);
	void	set_number(std::string number);
};

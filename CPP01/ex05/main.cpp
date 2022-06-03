/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:41:30 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:42:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	testHarl;

	testHarl.complain("DEBUG");
	testHarl.complain("INFO");
	testHarl.complain("WARNING");
	testHarl.complain("ERROR");
	return (0);
}

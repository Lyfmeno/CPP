/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:21:34 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 14:55:36 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#define	slot 4

class MateriaSource : public IMateriaSource
{
	protected:
		static const int	_slot = 4;
		AMateria			*_inventory[_slot];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		virtual ~MateriaSource();
		MateriaSource &operator= (const MateriaSource &rhs);

		void learnMateria(AMateria*);
		AMateria *createMateria(std::string const &type);
};

#endif
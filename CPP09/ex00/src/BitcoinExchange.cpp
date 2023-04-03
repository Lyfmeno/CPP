#include "../inc/BitcoinExchange.hpp"
#include <fstream>

/////////////////////////////
// Coplien                 //
/////////////////////////////
BitcoinExchange::BitcoinExchange(int ac, char **input)
{
	if (ac < 2 || !input)
		throw std::invalid_argument("Error: invalid parameters");
	this->database.open("data.csv", std::fstream::in);
	if (!this->database.is_open())
		throw std::invalid_argument("Error: cannot open 'data.csv'");
	for (int i = 1; i < ac; i++)
	{
		this->file.open(input[i], std::fstream::in);
	}
	this->database.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	*this = cpy;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->values = rhs.values;
		this->year = rhs.year;
		this->month = rhs.month;
		this->day = rhs.day;
	}
	return (*this);
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
void	BitcoinExchange::fillMap()
{
	std::string	line;

	std::getline(this->database, line);
	while (std::getline(this->database, line))
	{
		int					i = 0;
		std::string			date;
		std::string			val;
		std::string			words;
		std::istringstream	iss(line);

		while (std::getline(iss, words, ','))
		{
			if (i == 0)
				date = words;
			else if (i == 1)
				val = words;
			else
				throw std::invalid_argument("Error: invalid database");
			i++;
		}
		this->values[date] = val;
	}
}
/////////////////////////////
// Exceptions              //
/////////////////////////////
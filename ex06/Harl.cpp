#include "./Harl.hpp"

Harl::Harl(): count_of_functions(4)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cerr << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cerr << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::get_level_index(const std::string	levelName) const
{
	const std::string levels[] = 
	{
		"debug", 
		"info", 
		"warning", 
		"error"
	};
	int	i = -1;
	while (++i < count_of_functions && levelName != levels[i])
	;
	return (i);

}

void Harl::complain(int i)
{
	const HarlMemFn	HarlMemFnPtrs[] = 
	{
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};

	if (i == count_of_functions)
		std::cerr << ("Sorry, there is no such a function") << std::endl;
	else
		(this->*(HarlMemFnPtrs[i]))();
}


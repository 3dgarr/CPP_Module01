#pragma once
#include <iostream>


class Harl
{
	public:
		void complain(std::string level) const;		

	public:
		Harl();
		~Harl();
	
	private:
	void			debug(void)		const;
	void			info(void)		const;
	void			warning(void)	const;
	void			error(void)		const;
	int				get_level_index(const std::string levelName) const;
	
	private:
	const int		count_of_functions;
	
};

typedef	void (Harl::*HarlMemFn)(void) const;
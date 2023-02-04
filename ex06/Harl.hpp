#pragma once
#include <iostream>


class Harl
{
	public:
		void complain(int i);		

	public:
		Harl();
		~Harl();
	
	private:
	void			debug( void );
	void			info( void );
	void			warning( void );
	void			error( void );
	int				get_level_index(const std::string	levelName) const;
	
	private:
	const int		count_of_functions;
	
};

typedef	void (Harl::*HarlMemFn)(void);
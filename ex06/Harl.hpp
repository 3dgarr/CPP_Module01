#pragma once
#include <iostream>


class Harl
{
	public:
		void	complain(int i) const;		

	public:
		Harl();
		~Harl();
	
	private:
	void			debug( void ) const;
	void			info( void ) const;
	void			warning( void ) const;
	void			error( void ) const;
	
	private:
	const int		count_of_functions;
	
};

typedef	void (Harl::*HarlMemFn)(void) const;
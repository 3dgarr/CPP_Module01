#include "./Harl.hpp"

namespace	HarlFilter
{
	int	get_level_index(const std::string&	levelName) 
	{
		const std::string levels[] = 
		{
			"DEBUG", 
			"INFO", 
			"WARNING", 
			"ERROR"
		};
		int	i = -1;
		while (++i < 4 && levelName != levels[i])
		;
		return (i);
	}

	void	HarlFilter(const std::string &levelName, Harl &harlik)
	{
		int index = get_level_index(levelName);
		if (index == 4)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		else
		{
			while (index != 4)
			{
				switch (index)
				{
					case	0:
						std::cout << "[ DEBUG ]" << std::endl;
						harlik.complain(index);
						break;
					case	1:
						std::cout << "[ INFO ]" << std::endl;
						harlik.complain(index);
						break;

					case	2:
						std::cout << "[ WARNING ]" << std::endl;
						harlik.complain(index);
						break;
					case	3:
						std::cout << "[ ERROR ]" << std::endl;
						harlik.complain(index);
						break;
				}			
				std::cout << std::endl;
				index++;
			}
		}
	}

}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);

	Harl	harlik;
	HarlFilter::HarlFilter(argv[1], harlik); 
	return 0;
}

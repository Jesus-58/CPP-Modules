#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie* horde = zombieHorde(N, "PepeLui");
	int	i = 0;

	while (i < N)
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
	return (0);
}
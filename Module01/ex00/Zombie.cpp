#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string nom)
{
	this->nom = nom;
}

void	Zombie::announce(void)
{
	std::cout << this->nom << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string nom)
{
	return new Zombie(nom);
}

void randomChump(std::string name)
{
	Zombie	z(name);
	z.announce();
}


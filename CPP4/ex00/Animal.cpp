#include "Animal.hpp"

Animal::Animal()
{
    return ;
}


Animal::Animal(const Animal &copy)
{
    *this = copy;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal &Animal::operator=( const Animal &stats )
{
    this->type = stats.type;
    return (*this);
}

Animal:: ~Animal()
{
   return ;
}

void    Animal::makeSound() const
{
    if(this->getType() == "Cat")
    {
        std::cout << "Meoow" << std::endl;
    }
    else if(this->getType() == "Dog")
    {
        std::cout << "Haw" << std::endl;
    }
}
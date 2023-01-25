#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact users[8];
    
    public:
    PhoneBook();
    ~PhoneBook();
    int     counter;
    int     total;
    void    Banner(void);
    void    addUser(void);
    void    getUserById(int index);
	void	getAllUser(void);
    void    getUserinfo(int index);

};

#endif
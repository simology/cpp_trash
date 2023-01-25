#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string.h>
#include <iostream>
class Contact
{
    public:
		Contact();
		~Contact();
		int			index;
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	Number;
		std::string	Secret;

		std::string	getIndex();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getNumber();
		std::string	getSecret();
		/*
		void		setFirstName(std::string fn);
		void		setLastName(std::string fn);
		void		setNickName(std::string fn);
		void		setNumber(std::string fn);
		void		setSecret(std::string fn);
		*/
		bool			saveContact(int id);
		void			getContactById(void);
		void			getAllContacts(void);
		void			getFullContactInfo(void);
		std::string		Resize(std::string st);
		int				StrLen(std::string st);


};

#endif
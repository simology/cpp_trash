#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::fstream my_file;
    char ch;
    if(ac == 4)
    {
        //std::cout << av[1];
        my_file.open(av[1], std::ios::in);
    	if (!my_file) 
        {
		    std::cout << "No such file";
	    }
        else {

		while (1) {
			my_file. >> ch;
            if(isspace(ch))
                std::cout << "found space \n";
			if (my_file.eof())
				break;

			std::cout << ch;
		}

	}
	my_file.close();
    }
    else
    {
        std::cout << "error \n";
    }
    return (0);
}
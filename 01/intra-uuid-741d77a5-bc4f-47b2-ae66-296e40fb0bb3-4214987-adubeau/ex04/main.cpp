/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:17:14 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/22 21:17:15 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>

std::string	getString(char *av)
{
	std::string tmp;
	for (size_t i = 0; i < strlen(av); i++)
		tmp = tmp + av[i];
	return tmp;
}

int main(int ac, char **av)
{
	std::string filename = "";
	std::string s1 = "";
	std::string s2 = "";
	int	found = 0;

	if (ac != 4) {
		std::cout << "Error, wrong arguments\nPlease try again with a file name and two strings" << std::endl;
		exit(1);
	}
	filename = getString(av[1]);
	s1 = getString(av[2]);
	s2 = getString(av[3]);
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");
	for (std::string s; getline(ifs, s);)
	{
		found = s.find(s1);
		while (found >= 0) {
			s.erase(found, s1.length());
			s.insert(found, s2);
			found = s.find(s1,found+1);
		}
		ofs << s << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:06:22 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:06:24 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void set_name(std::string name);
	std::string get_name(void) const;

};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
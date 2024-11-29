#include <iostream>
#include"Exceptions.h"
#include"Traitement.h"
int main()
{
	Traitement T(0, 2, 0, 400);
	try {
		T.add();
		
	}
	catch (const Exceptions& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		T.bonneinterval();
	}
	catch (const Exceptions& e) {
		std::cout << e.what() << std::endl;
	}
	try {

		T.divide();
	}
	catch (const Exceptions& e) {
		std::cout << e.what() << std::endl;
	}
	
	

}


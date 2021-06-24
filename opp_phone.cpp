#include <iostream>
#include "C_Phone.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	C_Phone phone((char*)"Зелёный", 0.99, true);
	phone.show_info();

	//	set
	phone.set_message_cost(2.33);
	phone.set_message_text((char*)"Красный");

	//	get
	std::cout << phone.get_message_text() << "\n";
	std::cout << phone.get_message_cost() << "\n";
	std::cout << phone.get_message_sent() << "\n";

	phone.show_info();
}
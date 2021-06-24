#include "C_Phone.h"
#include <iostream>

C_Phone::C_Phone()
{
	message_text = (char*)"Красный";
	message_cost = 0.1f;
	message_sent = true;
}
C_Phone::C_Phone(char* _message_text, float _message_cost, bool _message_sent)
{
	message_text = _message_text;
	message_cost = _message_cost;
	message_sent = _message_sent;
}
void C_Phone::show_info()
{
	std::cout <<
		"Текст сообщения: " << message_text << "\n" <<
		"Цена за отправку сообщения: " << message_cost << "\n" <<
		"Сообщение отправлено: " << message_sent << "\n";
}

//	set
void C_Phone::set_message_cost(float _message_cost)
{
	message_cost = _message_cost;
}
void C_Phone::set_message_text(char* _message_text)
{
	message_text = _message_text;
}
void C_Phone::set_message_sent(bool _message_sent)
{
	message_sent = _message_sent;
}

//	get
char* C_Phone::get_message_text()
{
	return message_text;
}
float C_Phone::get_message_cost()
{
	return message_cost;
}
float C_Phone::get_message_sent()
{
	return message_sent;
}

C_Phone::~C_Phone()
{

}
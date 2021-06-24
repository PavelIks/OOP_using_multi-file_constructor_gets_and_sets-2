#pragma once
class C_Phone
{
public:
	C_Phone();
	C_Phone(char* _message_text, float _message_cost, bool _message_sent);

	void set_message_cost(float _message_cost);
	void set_message_text(char* _message_text);
	void set_message_sent(bool _message_sent);

	char* get_message_text();
	float get_message_cost();
	float get_message_sent();

	void show_info();

	~C_Phone();

private:
	char* message_text;
	float message_cost;
	bool message_sent;
};
#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class User
{
private:
	string username;
	string password;
	string email;
	string Location;
	string gender;
	int age;
	bool is_public;
public:
	User(string _user, string _pass, string _email, string _loc, string _gender, int _age, bool user_type)
	{
		username = _user;
		password = _pass;
		email = _email;
		Location = _loc;
		gender = _gender;
		age = _age;
		is_public = user_type;
	}
	void operator=(const User& other)
	{
		username = other.username;
		password = other.password;
		email = other.email;
		Location = other.Location;
		gender = other.gender;
		age = other.age;
		is_public = other.is_public;
	}
	User(const User& other)
	{
		username = other.username;
		password = other.password;
		email = other.email;
		Location = other.Location;
		gender = other.gender;
		age = other.age;
		is_public = other.is_public;
	}
	void friend operator>>(ifstream& input, User& other)
	{
		input >> other.username;
		input >> other.password;
		input >> other.email;
		input >> other.Location;
		input >> other.gender;
		input >> other.age;
		input >> other.is_public;
	}
};
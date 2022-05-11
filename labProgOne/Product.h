#pragma once
#include <iostream>
#define _CERT_SECURE_NO_WARNINGS
class Product
{
private:

	char* _name;
	char* _cipher;
	float _mass;

public:
	Product();
	Product(const char* name, const char* cipher, float mass);
	Product(const Product& obj);
	~Product();
	char* GetName(char* name, int num);
	char* GetName();
	char* GetCipher();
	char* GetCipher(char* cipher, int num);
	float GetMass();
	void SetName(const char* name);
	void SetCipher(const char* cipher);
	void SetMass(float mass);
	void Set(const char* name, const char* cipher, float mass);
	void Print();

};


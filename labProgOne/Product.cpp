#include "Product.h"

Product::Product()
{       

    std::cout << "Constructor without parameters\n";
    this->_name = nullptr;
    this->_cipher = nullptr;
    this->_mass = 0.0f;
}

Product::Product(const char* name, const char* cipher, float mass)
{
    std::cout << "Constructor with parameters\n";

    if (!name) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_name = new char[strlen(name) + 1];
    if (!this->_name) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_name, name);
    if (!cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_cipher = new char[strlen(cipher) + 1];
    if (!this->_cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_cipher, cipher);
    if (mass < 0) {
        std::cout << "mass<0\n";
        return;
    }
    this->_mass = mass;


}

Product::Product(const Product& obj)
{       
    std::cout << "Copy constructor\n";
    
    this->_name = new char[strlen(obj._name) + 1];
    if (!this->_name) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_name, obj._name);

   
    this->_cipher = new char[strlen(obj._cipher) + 1];
    if (!this->_cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_cipher, obj._cipher);
    this->_mass = obj._mass;

}

Product::~Product()
{
    if (this->_name) {
        delete[]this->_name;
    }
    if (this->_cipher) {
        delete[]this->_cipher;
    }
}

char* Product::GetName(char* name, int num)
{    
    strcpy_s(name, num, this->_name);


    return name;
}

char* Product::GetName()
{    

    char* buff = new char[strlen(this->_name) + 1];

    if (!buff) {
        std::cout << "name not valid !\n";
        return nullptr;
    }
    strcpy(buff, this->_name);

    return buff;
}

char* Product::GetCipher()
{
    char* buff = new char[strlen(this->_cipher) + 1];

    if (!buff) {
        std::cout << "name not valid !\n";
        return nullptr;
    }
    strcpy(buff, this->_cipher);

    return buff;
}

char* Product::GetCipher(char* cipher, int num)
{ 
   
    strcpy_s(cipher, num, this->_cipher);

    return  cipher;
}

float Product::GetMass()
{
    return this->_mass;
}

void Product::SetName(const char* name)
{
    if (!name) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_name = new char[strlen(name) + 1];
    if (!this->_name) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_name, name);
    
}

void Product::SetCipher(const char* cipher)
{
    if (!cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_cipher = new char[strlen(cipher) + 1];
    if (!this->_cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_cipher, cipher);
    
}

void Product::SetMass(float mass)
{
    if (mass < 0) {
        std::cout << "mass<0\n";
        return;
    }
    this->_mass = mass;
}

void Product::Set(const char* name, const char* cipher, float mass)
{
    if (!name) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_name = new char[strlen(name) + 1];
    if (!this->_name) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_name, name);
    if (!cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    this->_cipher = new char[strlen(cipher) + 1];
    if (!this->_cipher) {
        std::cout << "name not valid !\n";
        return;
    }
    strcpy(this->_cipher, cipher);
    if (mass < 0) {
        std::cout << "mass<0\n";
        throw;
    }
    this->_mass = mass;
     
}

void Product::Print()
{
    std::cout << " Name:" << this->_name << " Cipher:" << this->_cipher << " Mass:" << this->_mass<<std::endl;
}


#include <iostream>
#include "Product.h"



int main()
{
	Product product;
	product.Set("Computer", "123112", 12);
	product.Print();
	std::cout << "|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|" << std::endl;
	Product prod[3];
	prod[0].Set("Disk", "123213", 1);
	prod[1].Set("Goggle", "123213", 134);
	prod[2].Set("table", "123123", 123);
	for (int i = 0; i < 3; i++)
	{
		prod[i].Print();

	}
	std::cout << "|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|" << std::endl;
	Product *prodDinamic=new Product[3];
	prodDinamic[0].Set("Disk", "123213", 1);
	prodDinamic[1].Set("Goggle", "123213", 134);
	prodDinamic[2].Set("table", "123123", 123);
	for (int i = 0; i < 3; i++)
	{
		prodDinamic[i].Print();

	}
	
	std::cout << "|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|" << std::endl;
	void (Product:: * pf)();
	pf = &Product::Print;
	(prodDinamic[1].*pf)();

	delete[]prodDinamic;
}


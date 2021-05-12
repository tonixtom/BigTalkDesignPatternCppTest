#include <Product.h>
#include<algorithm>

#include <iostream>

void Product::Add(std::string part)
{
	this->m_Parts.push_back(part);
}

void Product::Show()
{
	std::cout << "��Ʒ������" << std::endl;
	for_each (m_Parts.begin(),m_Parts.end(), [](std::string strout)
    {
        std::cout << strout.c_str() << std::endl;
    });

}

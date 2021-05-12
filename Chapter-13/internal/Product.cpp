#include <Product.h>
#include<algorithm>

#include <iostream>

void Product::Add(std::string part)
{
	this->m_Parts.push_back(part);
}

void Product::Show()
{
	std::cout << "产品，创建" << std::endl;
	for_each (m_Parts.begin(),m_Parts.end(), [](std::string strout)
    {
        std::cout << strout.c_str() << std::endl;
    });

}


#include <iostream>
#include <ASSET_H>
#include <string>

Asset::Asset(){
	valueA = 0;
	productA = "";	
}

Asset::Asset(int value, std::string product_type){
	valueA=value;
	productA = product_type;
}

std::string Asset::get_product_type(){
std::cout << productA << std::endl;
return productA;
}	

int get_value(){
	std::cout << valueA << std::endl;
	return valueA;
}

Asset::~Asset(){
}

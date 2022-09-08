#include <iostream>
#include <string>
#ifndef ASSET_H
#define ASSET_H

class Asset {
public:
Asset();
Asset(int value, std::string product_type);
int valueA;
std::string productA;
std::string get_product_type(); 
int get_value();
~Asset();
};
#endif






#include <iostream>
#include <string>
int main(){
Asset *first, *second;
first = new Asset(5, "Chair");
second = new Asset(6, "Table");
first->get_value();
first->get_product_type();
second->get_value();
second->get_product_type();
	
}

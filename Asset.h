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
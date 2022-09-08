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
Asset::Asset(){
	valueA = 0;
	productA = "";	
}

Asset::Asset(int value, std::string product_type){
	valueA=value;
	productA = product_type;
}

std::string Asset::get_product_type(){
//std::cout << productA << std::endl;
return productA;
}	

int Asset::get_value(){
	//std::cout << valueA << std::endl;
	return valueA;
}

Asset::~Asset(){
}





#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H
class AssetPortfolio {
public:
AssetPortfolio();
AssetPortfolio(int size);
int sizeA;
int amountAssets=0;
int get_num_assets();
bool has_asset(std::string product);
Asset * get_assets();
Bool add_asset(Asset new_asset);
~AssetPortfolio();
};
#endif
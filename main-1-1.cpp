
#include <iostream>
#include <Asset.h>
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

int main(){
Asset *first, *second;
first = new Asset(5, "Chair");
second = new Asset(6, "Table");
AssetPortfolio(2);
AssetPortfolio::add_asset(first);
AssetPortfolio::add_asset(second);
AssetPortfolio::has_asset("Chair");
AssetPortfolio::Asset *get_assets();
AssetPortfolio::get_num_assets();
}
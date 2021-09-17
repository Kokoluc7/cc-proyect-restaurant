#include "Rest.hh"

Rest::Rest(std::string crockery, std::string material, float price)
{
    this->crockery = crockery;
    this->material = material;
    this->price = price;
}

Rest::~Rest()
{

}

std::string Rest::GetCrocker() const
{
    return crocker;
}

std::string Rest::GetMaterial() const
{
    return material;
}


unsigned int Rest::Getprice() const
{
    return price;
}
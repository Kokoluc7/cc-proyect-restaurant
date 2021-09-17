#pragma once
#include <string>

class Rest{
    private:
       std::string crockery;
       std::string material;
       float price;
    public:
       Rest(std::string crockery, std::string material, float price);
       ~Rest();
       std::string GetCrockery() const;
       std::string GetMaterial() const;
       float GetPrice() const;
};
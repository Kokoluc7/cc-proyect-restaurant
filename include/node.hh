#pragma once
#include "Rest.hh"

class Node
{
    private:
       Rest* rest{};
    public:
       Node* next{};
       Node(Rest*& rest);
       ~Node();
       Rest* GetRest() const;
};
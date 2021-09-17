#pragma once
#include "node.hh"
#include "Rest.hh"

class Stack
{
    private:
       Node* head{nullptr};
    public:
       Stack();
       ~Stack();
       Node* GetTop() const;
       void Pop();
       void Push(Rest*& Rest);
       bool IsEmpty() const;
       void Print();
};
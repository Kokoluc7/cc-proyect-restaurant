#include <iostream>
#include "Rest.hh"
#include "stack.hh"

int main()
{
    Rest* rest1{new Rest("frying pan", "Metal", 259.00)};
    Rest* rest2{new Rest("Glass cup", "glass", 388.23)};
    Rest* rest3{new Rest("plate", "porcelain", 420.00)};
    Rest* rest4{new Rest("plate", "ceramic", 410.45)};

    Stack* stack{new Stack()};
    stack->Push(rest1);
    stack->Push(rest2);
    stack->Push(rest3);
    stack->Push(rest4);
    stack->Print();


    stack->Pop();
    stack->Pop();

    stack->Print();

    
    std::cin.get();

    delete stack;
    return 0;
};

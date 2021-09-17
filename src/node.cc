#include "node.hh"

Node::Node(Rest*& Rest)
{
    this->rest = rest;
}

Node::~Node(){

}

Rest* Node::GetRest() const
{
    return rest;
}
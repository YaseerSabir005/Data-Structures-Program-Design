//
// Created by lakhanis on 6/17/24.
//

#include "Node.h"

Node::Node()
{
    next = nullptr;

}

Node::Node(const int anItem)
{
    item = anItem;
    next = nullptr;
}


Node::Node(const int anItem, Node* nextNodePtr)
{
    item = anItem;
    next = nextNodePtr;
}


void Node::setItem(const int anItem)
{
    item = anItem;


}


void Node::setNext(Node* nextNodePtr)
{
    next = nextNodePtr;

}


int Node::getItem() const
{
    return item;
}


Node* Node::getNext() const
{
    return next;
}

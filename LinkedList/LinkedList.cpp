//
// Created by lakhanis on 6/17/24.
//

#include "LinkedList.h"

LinkedList::LinkedList()
{
    headPtr = nullptr;
    itemCount = 0;

}

/**
 * Copy constructor will copy item from original list (aList) to a new
 * LinkedList
 * @param aList - Original LinkedList
 */
LinkedList::LinkedList(const LinkedList& aList)
{
    //Copy number of items from original list to new list
    itemCount = aList.itemCount;

    //Create a pointer which points to the first item in the original list
    //If original list is empty then this pointer will be set to nullptr
    Node* nodePointer = aList.headPtr;

    //If nodePointer is nullptr (original list is empty) then
    //set the new headPtr to nullptr and we are doen
    if (nodePointer == nullptr)
        headPtr = nullptr;

        //Need to copy each items from original list to new list
    else {
        //Create a new node and copy the first node from original
        //list to node in the new list
        headPtr = new Node();
        headPtr->setItem(nodePointer->getItem());

        //Update the nodePointer to point to next Node
        nodePointer = nodePointer->getNext();

        //Create a new pointer which points to last inserted node
        //in the new node
        Node *preNodePointer = headPtr;

        //Iterate as long as nodePointer is not nullptr
        //nodePointer is pointing to next code in original list
        //to be copied to new list
        while (nodePointer != nullptr) {
            //Get item from original node
            int nextItem = nodePointer->getItem();
            //Create a new node containing the next item
            Node *newNodePtr = new Node(nextItem);
            //Link new node to last inserted node in the new list
            preNodePointer->setNext(newNodePtr);
            //Advance pointer to point to newly inserted node in new list
            preNodePointer = newNodePtr;
            //Advance node pointer to next node in original list
            nodePointer = nodePointer->getNext();
        }
    }
}

LinkedList::~LinkedList()
{
    //Call clear function
    clear();

}


bool LinkedList::isEmpty() const
{
    //need to see if link list is empty
    //if (itemCount == 0) {return true;}
    //else {return false;}

    return itemCount == 0;
}


int LinkedList::getCurrentSize() const
{
    return itemCount;
}

bool LinkedList::add(const int newEntry)
{
    //Create a new node with the given item
    Node* newNode = new Node(newEntry);
    //Set new node to point to first node in the list
    newNode->setNext(headPtr);
    //Set headPtr to point to the new node
    headPtr = newNode;
    //Update item count
    itemCount++;

    //Return true to indicate successfull addition
    return true;
}


std::vector<int> LinkedList::toVector() const
{
    std::vector<int> contents;

    Node* currPtr = headPtr;

    while (currPtr != nullptr)
    {
        contents.push_back(currPtr->getItem());
        currPtr = currPtr->getNext();
    }
    return contents;
}


bool LinkedList::remove(const int anEntry)
{
    //Find the item in the linked list
    //We will use getPointerTo function which will return pointer
    //to the node which contains the given item
    Node *nodePtr = getPointerTo(anEntry);

    //Check to see if I can rmove the node with given item
    //If list is empty or the item is not in the list then we cannot
    //remove the item and we will return false
    bool canRemoveItem = !isEmpty() && (nodePtr != nullptr);

    if (canRemoveItem) {

        //Copy data from first node to the node containg item to be removed
        nodePtr->setItem(headPtr->getItem());

        //Delete first node
        Node* nodeToDelete = headPtr;
        headPtr = headPtr->getNext();

        //Delete the Node
        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;

        //Update itemcount
        itemCount--;
    }

    return canRemoveItem;
}


void LinkedList::clear()
{
    Node* nodeToDelete = headPtr;

    while (headPtr != nullptr) {
        headPtr = headPtr->getNext();

        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;

        nodeToDelete = headPtr;
    }

    itemCount = 0;
}


int LinkedList::getFrequencyOf (const int anEntry) const
{
    int frequency =0;
    Node * currPtr = headPtr;
    while (currPtr != nullptr) {
        if (anEntry == currPtr->getItem()) {
            frequency++;
        }

        currPtr = currPtr->getNext();
    }
    return frequency;
}


bool LinkedList::contains(const int anEntry) const
{
    return (getPointerTo(anEntry) != nullptr);
}

Node* LinkedList::getPointerTo (const int target) const
{
    bool found = false;

    Node* currPtr = headPtr;

    while (!found && (currPtr != nullptr))
    {
        if (target == currPtr->getItem())
            found = true;
        else
            currPtr = currPtr->getNext();
    }

    return currPtr;
}

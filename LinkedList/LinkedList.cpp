// This is the cpp file for LinkedList

#include "LinkedList.h"
#include <vector>

/**
 * Constructor which will create an empty list. It will set the headPtr to nullptr
 * and itemCount to 0.
 */
LinkedList::LinkedList() : headPtr(nullptr), itemCount(0) {}

/**
 * Copy constructor will copy items from the original list (aList) to a new LinkedList.
 * @param aList - Original LinkedList
 */
LinkedList::LinkedList(const LinkedList &aList) : itemCount(aList.itemCount)
{
    if (aList.headPtr == nullptr)
    {
        headPtr = nullptr;
    }
    else
    {
        headPtr = new Node(aList.headPtr->getItem());
        Node *originalNode = aList.headPtr->getNext();
        Node *newNode = headPtr;

        while (originalNode != nullptr)
        {
            newNode->setNext(new Node(originalNode->getItem()));
            newNode = newNode->getNext();
            originalNode = originalNode->getNext();
        }
    }
}

/**
 * Destructor will call the clear function to delete all the nodes in the linked list.
 */
LinkedList::~LinkedList()
{
    clear();
}

/**
 * Function to check if the list is empty.
 * @return true if list is empty.
 */
bool LinkedList::isEmpty() const
{
    return itemCount == 0;
}

/**
 * Function to get the number of nodes in the list.
 * @return the number of nodes in the list.
 */
int LinkedList::getCurrentSize() const
{
    return itemCount;
}

/**
 * Add a new node function. It will add a new object to the start of the list.
 * @param newEntry - object to be added to the list.
 * @return true if successful.
 */
bool LinkedList::add(const int newEntry)
{

    Node *newNode = new Node(newEntry);
    newNode->setNext(headPtr);
    headPtr = newNode;
    itemCount++;
    return true;
}

/**
 * Converts the linked list to a vector.
 * @return the vector with all the items in the list.
 */
std::vector<int> LinkedList::toVector() const
{
    std::vector<int> items;
    Node *current = headPtr;
    while (current != nullptr)
    {
        items.push_back(current->getItem());
        current = current->getNext();
    }
    return items;
}

/**
 * Remove the given entry from the list.
 * @param anEntry - object to be removed from the list.
 * @return true if successful, otherwise false.
 */
bool LinkedList::remove(const int anEntry)
{
    Node *current = headPtr;
    Node *previous = nullptr;

    while (current != nullptr)
    {
        if (current->getItem() == anEntry)
        {
            if (previous == nullptr)
            {
                headPtr = current->getNext();
            }
            else
            {
                previous->setNext(current->getNext());
            }
            delete current;
            itemCount--;
            return true;
        }
        previous = current;
        current = current->getNext();
    }
    return false;
}

/**
 * Deletes all the nodes from the list.
 */
void LinkedList::clear()
{
    Node *current = headPtr;
    while (current != nullptr)
    {
        Node *temp = current->getNext();
        delete current;
        current = temp;
    }
    headPtr = nullptr;
    itemCount = 0;
}

/**
 * Returns the number of times an object appears in the list.
 * @param anEntry - Object to be counted.
 * @return number of times the object appears in the list.
 */
int LinkedList::getFrequencyOf(const int anEntry) const
{
    int frequency = 0;
    Node *current = headPtr;
    while (current != nullptr)
    {
        if (current->getItem() == anEntry)
        {
            frequency++;
        }
        current = current->getNext();
    }
    return frequency;
}

/**
 * Function to check if the given object is in the list.
 * @param anEntry - Object to be searched.
 * @return true if the object is in the list, false otherwise.
 */
bool LinkedList::contains(const int anEntry) const
{
    return getPointerTo(anEntry) != nullptr;
}

/**
 * Finds the object in the list and returns a pointer to the node that contains it.
 * @param target - Object that we are searching for.
 * @return pointer to the node containing the object, or nullptr if not found.
 */
Node *LinkedList::getPointerTo(const int target) const
{
    Node *current = headPtr;
    while (current != nullptr)
    {
        if (current->getItem() == target)
        {
            return current;
        }
        current = current->getNext();
    }
    return nullptr;
}

#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H
#include "../sourcecode/SllNode.h"
#include <iostream>
using namespace std;

class SinglyLinkedList
{
    public:
        SinglyLinkedList();
        virtual ~SinglyLinkedList();
        void addB(SllNode* nodePtr);
        void addE(SllNode* nodePtr);
        SllNode* getLastNodeAddress();
        SllNode* getHead();
        void printlist();
        SllNode* deleteB();
        SllNode* deleteE();
        bool isEmpty();

    protected:

    private:
        SllNode* head;
};

#endif // SINGLYLINKEDLIST_H

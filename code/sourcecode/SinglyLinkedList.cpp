#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
    head=nullptr;
}

void SinglyLinkedList::addB(SllNode* nodePtr)
{
    nodePtr->setNextPtr(head);
    head=nodePtr;
}
SllNode* SinglyLinkedList::getLastNodeAddress()
{
 SllNode* curr;
 curr=head;

     if(curr==nullptr)
     {
         return(curr);

     }
     while(curr->getNextPtr())
     {
         curr=curr->getNextPtr();
     }
     return(curr);

}
void SinglyLinkedList::addE(SllNode* nodePtr)
{
    SllNode* lnode=getLastNodeAddress();
    if(lnode!=nullptr)
    {
        lnode->setNextPtr(nodePtr);
        nodePtr->setNextPtr(nullptr);
    }else{
    addB(nodePtr);
    }
}

void SinglyLinkedList::printlist()
{
    SllNode* curr;
    curr=head;
    cout<<"the singly linked ist is"<< endl;
    while(curr!=nullptr)
    {
        cout << " " << curr->getData()<<" ";
        curr=curr->getNextPtr();
    }
    cout << endl;
}


SllNode* SinglyLinkedList::getHead()
{
   return(head);
}
bool SinglyLinkedList::isEmpty()
{
    if(head==nullptr){
        return(true);
    }else{
    return(false);
    }
}
SllNode* SinglyLinkedList::deleteB()
{
    if(isEmpty())
    {
        return(nullptr);
    }
    SllNode* answer=head;
    head=head->getNextPtr();
    return(answer);
}
SllNode* SinglyLinkedList::deleteE()
{
    if(isEmpty())
    {
        return(nullptr);
    }
    if(head->getNextPtr()==nullptr)
    {
        SllNode* answer=head;
        head=nullptr;
        return(answer);
    }
    SllNode* curr=head;
    while((curr->getNextPtr()->getNextPtr()))
    {
        curr=curr->getNextPtr();
    }
    SllNode* answer=curr->getNextPtr();
    curr->setNextPtr(nullptr);
    return(answer);

}
SinglyLinkedList::~SinglyLinkedList()
{
    //dtor
}

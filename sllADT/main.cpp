#include <iostream>
#include "../code/sourcecode/SinglyLinkedList.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    SinglyLinkedList l1;
    SllNode* n1;

    for(int counter=21; counter < 25; counter++)
    {
        n1=new SllNode();
        n1->setData(counter);
        l1.addB(n1);
    }

    for(int counter=51; counter < 55; counter++)
    {
        n1=new SllNode();
        n1->setData(counter);
        l1.addE(n1);
    }
    l1.printlist();

    for(int counter=0; counter < 2; counter++)
    {
         SllNode* nodePtr=l1.deleteB();
         if(nodePtr)
         {
           cout << "deleted " << nodePtr->getData()<< " from the beginning of the list" << endl;
         }else{
         cout << "could not delete from the beginning of the list"<< endl;}
    }

    for(int counter=0; counter < 2; counter++)
    {
         SllNode* nodePtr=l1.deleteE();
         if(nodePtr)
         {
           cout << "deleted " << nodePtr->getData()<< " from the end of the list" << endl;
         }else{
         cout << "could not delete from the end of the list"<< endl;}
    }


    return 0;
}

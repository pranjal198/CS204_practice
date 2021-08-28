#include "SllNode.h"

SllNode::SllNode()
{
    data=0;
    next=nullptr;
}

int SllNode::getData()
{
    return(data);
}

bool SllNode::setData(int val)
{
    data=val;
    return(true);
}

SllNode* SllNode::getNextPtr()
{
    return(next);
}

bool SllNode::setNextPtr(SllNode* nodePtr)
{
    next=nodePtr;
    return(true);
}
SllNode::~SllNode()
{
    //dtor
}

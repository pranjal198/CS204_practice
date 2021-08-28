#ifndef SLLNODE_H
#define SLLNODE_H


class SllNode
{
    public:
        SllNode();
        virtual ~SllNode();
        int getData();
        bool setData(int);
        SllNode* getNextPtr();
        bool setNextPtr(SllNode*);

    protected:

    private:
        int data;
        SllNode* next;
};

#endif // SLLNODE_H

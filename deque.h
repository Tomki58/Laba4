#ifndef DEQUE_H
#define DEQUE_H
#include "log.h"
#include "launch.h"

class Deque
{
private:
    struct node
    {
        Log* ll;
        node* next;
    };
    node *top, *last;

public:
    Deque();
//    Deque(int, char*, char*); == ()
    Deque(const Deque&);
    void addLast(Log*);
//    void  addFirst(Log*); == <<
//    void addFirst(Launch*); == <<
    void addLast(Launch*);
//    bool delLast();
//    bool delFirst();
    Log* First();
    Log* Last();
    bool sort();
    bool reverse();
    bool isEmpty();
//    void saveToFile(FILE*); == >> (FILE*)
//    Log* getElement(int); == []
    int getCount();
    ~Deque();

    void operator <<(Log*);
    void operator <<(Launch*);
    void operator >> (FILE*);
    void operator ()(int, char*, char*);
    Log* operator[](int);
    bool operator --(int);
    bool operator --();
    bool operator >(Deque *);
};

#endif // DEQUE_H

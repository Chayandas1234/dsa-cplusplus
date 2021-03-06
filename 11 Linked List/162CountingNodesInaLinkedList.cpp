// Counting Nodes In A Linked List
// Author: REET

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void count(struct Node *p) {
    int count = 0;
    while(p != NULL) {
        count++;
        p = p->next;
    }
    cout << "Node Count(Iterative Approach): " << count << endl;
}

int Rcount(struct Node *p) {
    if(p == NULL) 
    return 0;
    return Rcount(p->next) + 1;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    count(first);
    cout << "Node Count(Recursive Approach): " << Rcount(first) << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Node Count(Iterative Approach): 5
Node Count(Recursive Approach): 5
*/
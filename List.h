#include <iostream>

#ifndef M1_LINKEDLIST_LIST_H
#define M1_LINKEDLIST_LIST_H
/**
 * Inserting A Node At An Index in a linked list
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/8/2017
 *
 * Header definitions for linked list class.
 *
 * @author Mariya Eggensperger
*/
const int CAPACITY = 100; // Capacity for 100 available data values
typedef int ElementType;

class ostream;
/**
 * Header definitions for a linked list
 * class which inserts nodes at defined
 * indices of a linked list.
 *
 * @param args
 * @return
*/
class List {

public:
    // Function members
    List(); // Constructor
    bool empty() const;
    void insert(ElementType item, int position);
    void erase(int position);
    void display(ostream & out) const;

private:
    // Data members
    int mySize;
    ElementType myArray[CAPACITY];
};
// Output operator prototype
ostream & operator << (ostream & out, const List & aList);

#endif //M1_LINKEDLIST_LIST_H

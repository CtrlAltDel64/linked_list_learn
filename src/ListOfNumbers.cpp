#include <iostream>
#include "ListOfNumbers.hpp"

using namespace std;


/* ------------------------------------------------------------------------
   Constructors for the ListOfNumbers class
        usage : ListOfNumbers *x = new ListOfNumbers();
                ListOfNumbers *x = new ListOfNumbers(12);
   ------------------------------------------------------------------------ */
ListOfNumbers::ListOfNumbers() {
	number = 0;
	next = NULL;
}

/* ------------------------------------------------------------------------ */
ListOfNumbers::ListOfNumbers(int v) {
	number = v;
	next = NULL;
}

/* ------------------------------------------------------------------------
   Set Methods for the class
        usage : x->SetValue(15);
   ------------------------------------------------------------------------ */
void ListOfNumbers::SetValue(int v) {
	number = v;
}

/* ------------------------------------------------------------------------ */
void ListOfNumbers::SetNext(ListOfNumbers *n) {
	next = n;
}

/* ------------------------------------------------------------------------
   Display methods :
        PrintItem() displays a single list element
        PrintList() displays the whole list (starting from the object it is
                  called on)
    	PrintListIterative() does the same as PrintList() in an iterative way
   ------------------------------------------------------------------------ */
void ListOfNumbers::PrintItem() {
	cout << "Number is equal to " << number << endl;
}

/* ------------------------------------------------------------------------ */
void ListOfNumbers::PrintList() {
	PrintItem();

	if (next != NULL)
		next -> PrintList();
}

/* ------------------------------------------------------------------------ */
void ListOfNumbers::PrintListIterative() {
	ListOfNumbers *p = this;

	while (p != NULL)
	{
		p->PrintItem();
		p = p->next;
	}
}

/* ------------------------------------------------------------------------
   Add methods => Append a new element at the end of the list
        Add(ListOfNumbers *n) - appends a pre-allocated object
        Add(int v) - creates a new object with the specified value and appends it
        Add() - creates and appends an empty object - returs the pointer to this
               new element (value affectation supposed to be done outside the class)
        AddRecursive - recursive version of Add(int v)
   ------------------------------------------------------------------------ */
void ListOfNumbers::Add(ListOfNumbers *n) {
	ListOfNumbers *p = this;

	while (p->next != NULL)
	{
		p = p->next;
	}

	p->next = n;
}

/* ------------------------------------------------------------------------ */
void ListOfNumbers::Add(int v) {
	ListOfNumbers *p = this;

	while (p->next != NULL)
	{
		p = p->next;
	}

	p->next = new ListOfNumbers(v);
}

/* ------------------------------------------------------------------------ */
void ListOfNumbers::AddRecursive(int v) {
	if (next == NULL)
		next = new ListOfNumbers(v);
	else
		next->AddRecursive(v);
}


/* ------------------------------------------------------------------------ */
ListOfNumbers *ListOfNumbers::Add() {
	ListOfNumbers *p = this;

	while (p->next != NULL) {
		p = p->next;
	}

	p->next = new ListOfNumbers();
	return p->next;
}


/* ------------------------------------------------------------------------
   Find method
            Returns a pointer to the first found matching element
            Returns NULL if not found
   ------------------------------------------------------------------------ */

ListOfNumbers * ListOfNumbers::FindRecursive(int v) {
	if (number == v)
		return this;

	if (next == NULL)
		return NULL;

	return next->FindRecursive(v);
}

/* ------------------------------------------------------------------------
		Added Methods
			FindIterative +
			Remove +
			Sort
			Destructor +
   ------------------------------------------------------------------------ */

ListOfNumbers * ListOfNumbers::FindIterative(int v) {
	ListOfNumbers *p = this;

	if (number == v)
		return this;

	while (p->next != NULL) {
		p = p->next;
		if (p->number == v)
			return p;
	}

	return NULL;
}

	//returns list head
ListOfNumbers * ListOfNumbers::Remove(int v) { //assuming no value repetitions (list is a set)
	ListOfNumbers *p1 = this;

	if (number == v) {
		p1 = next;
		next = NULL;

		cout << "\nNew list start.\n";
		return p1 //returns pointer to next object in list, new list start
	}

	ListOfNumbers *p2 = this;
	while (p1->next != NULL) {
		p1 = p1->next;
		if (p1->number == v) {
			p2->next = p1->next;
			*p1->next = NULL;
			delete p1;
			cout << "\nValue removed.\n";
			return this; //returns list start (unchanged)
		}

		if (p1->next == NULL) {
			cout << "\nNo such value found.\n";
			return this; //returns list start (unchanged)
		}

		*p2 = *p1;
	}
}

ListOfNumbers * ListOfNumbers::Sort() {
	ListOfNumbers *head = this;
	ListOfNumbers *before = this;
	ListOfNumbers *current = this;
	ListOfNumbers *scan = this;
	int min = number;

	if (next = NULL)
		return this;

	while (current->next != NULL) { //run until end of list
		while (scan->next != NULL) { //search for minimum
			scan = scan->next;
			if (scan->number < number) {
				min = scan->number;
			}
		}
		if (head = current && min < number) { //pointer edits if modifying list head

		}
		else () { //pointer edits if not modifying list body

		}
		current = current->next; //increment search and replace source
		scan = current;
	}
	*current->next = NULL;
	return head;
}

ListOfNumbers::~ListOfNumbers(){ //recursive
	if (next != NULL)
		delete next; //will call destructor before deallocating object, resulting in successful recursive deletion
}

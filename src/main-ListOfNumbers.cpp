#include "ListOfNumbers.hpp"
#include <iostream>


using namespace std;

int main() {
 ListOfNumbers *a,*b,*c;

 a = new ListOfNumbers(10);
 b = new ListOfNumbers(5);
 c = new ListOfNumbers(-24);

 a->SetNext(b);
 b->SetNext(c);

 cout << "Values : " << endl;
 a->PrintItem();
 b->PrintItem();
 c->PrintItem();

 cout << "List 1 : " << endl;
 a->PrintList();

 cout << "List 2 : " << endl;
 c->PrintList();

 //Additions:
 a = a->Remove(10);
 a->Sort(); //a will point to correct new header
}

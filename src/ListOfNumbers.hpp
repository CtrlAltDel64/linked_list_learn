#ifndef __LISTOFNUMBERS_HPP__
#define __LISTOFNUMBERS_HPP__

class ListOfNumbers {
private:
	int number;
	ListOfNumbers *next;
public:
	ListOfNumbers();
	ListOfNumbers(int v);

	void SetValue(int v);
	void SetNext(ListOfNumbers *n);

	// Prints a single item’s number
	void PrintItem();

	// Prints the whole list
	void PrintList();
	void PrintListIterative();

	// Append an element to the list
	void Add(ListOfNumbers *n);
		// ListOfNumbers *a = new ListOfNumbers(15);
		// head->Add(a);

	void Add(int v);
		// head->Add(15);

	ListOfNumbers *Add();
		// ListOfNumbers *a = head->Add();
		// a->SetValue(15);

	void AddRecursive(int v);

	ListOfNumbers * FindRecursive(int v);

	//Added Methods
	ListOfNumbers * FindIterative(int v);
	ListOfNumbers * Remove(int v);
	~ListOfNumbers();
};


#endif

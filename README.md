# linked_list_learn
Implementation of a linked list that contains numeric data

Once that is done, you shall:

1. Write and test the Add method
2. Write a recursive version of the Add method that inserts a new element in the list:
  void ListOfNumbers::AddR (ListOfNumbers *newObject);
3. Write and test an iterative and a recursive versions of the Find method, which finds and returns a pointer to the element whose value corresponds to the parameter. The method shall return a NULL pointer if the element does not exist.
  ListOfNumbers * ListOfNumbers::find (int Value);
  ListOfNumbers * ListOfNumbers::findR (int Value);
4. Write the list destructor that deletes all items in the list properly
5. Write and test the Remove method that only removes a single element. You can (but are not obliged to) use other methods.
  ListOfNumbers * ListOfNumbers::Remove (int Value);
  * What happens when the element does not exist in the list? Find a solution.
  * What happens if we want to remove the first element? Can you imagine a solution ?
  * What happens if we want to remove the first and only element ?

# Polynomial Class (Manual Memory Management)

A C++ `Polynomial` class managing dynamically allocated coefficient arrays (`double*`) on the heap.

## Concepts Demonstrated
* **Dynamic Memory & Rule of Three:** Custom destructor (`~Polynomial`), deep-copy constructor, and copy assignment operator (`operator=`) preventing memory leaks and shallow-copy bugs.
* **Horner's Method:** Evaluates $P(x)$ in $O(n)$ time complexity.
* **Stream Output:** Overloaded `operator<<` for human-readable algebraic formatting.

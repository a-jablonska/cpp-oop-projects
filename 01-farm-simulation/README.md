# Farm Simulation (Inheritance & Polymorphism)

A C++ console simulation modeling a farm ecosystem with a base `Animal` class and derived species (`Dog`, `Cat`, `Pig`, `Cow`).

## Concepts Demonstrated
* **Inheritance & Virtual Methods:** `Animal` defines a virtual `speak()` method overridden by derived classes.
* **Runtime Polymorphism:** `Farm` stores polymorphic `Animal*` pointers inside a `std::vector<Animal*>` and dynamically dispatches animal sounds.
* **Operator Overloading:** Overloaded `+` operator for adding animals to the farm (`farm + &dog`) and `<<` stream operator for formatted summary output.

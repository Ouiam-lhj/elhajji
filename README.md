

**Polymorphism Project - Ouiam El Hajji (BIM - INSA Lyon)**
Overview
This project demonstrates object-oriented programming concepts such as polymorphism, inheritance, and dynamic memory management using a simple race simulation. The project involves implementing a base class Character and its specialized derived classes, Mario and Yoshi, with distinct behaviors. The functionality is tested through STL container manipulation and memory leak checks.

Implementation Details
1. Class Character
The base class Character includes:
Data Members:
float speed_: Current speed of the character.
static float max_speed_: The maximum allowed speed, initialized to 10.
Constructors:
Default constructor: Initializes speed_ to 0.
Member Functions:
void Accelerate(): Increments speed_ by 1, ensuring it does not exceed max_speed_.
void Break(): Decrements speed_ by 1, ensuring it does not drop below 0.
auto speed() const: Inline accessor for speed_.
virtual std::string WhatAmI() const = 0: A pure virtual function, making Character abstract.
Destructor:
Virtual destructor to ensure proper cleanup in derived classes.
2. Polymorphism and Derived Classes
Two classes, Mario and Yoshi, are derived from Character:
Mario:
Overrides WhatAmI() to return "Mario".
Yoshi:
Overrides WhatAmI() to return "Yoshi".
Overrides Accelerate() to increase speed by 2 instead of 1.
3. Dynamic Memory Allocation
The Yoshi class introduces a new feature:
A dynamically allocated data member to store the number of crests.
The WhatAmI() function for Yoshi is updated to return a string in the format: "X crested Yoshi", where X is the number of crests.
4. Race Simulation
The program:
Creates an STL container populated with instances of Mario and Yoshi.
Demonstrates polymorphic behavior using iterators and range-based for loops.
Validates that Yoshi accelerates faster than Mario.
5. Memory Management
The implementation ensures proper allocation and deallocation of dynamic memory for Yoshi, with tests confirming no memory leaks using tools such as valgrind.

How to Run
Clone the Repository:
 git clone <your-repository-url>


Compile: Use clang++ or g++:
 clang++ -std=c++17 -Wall -Wextra -Werror main.cpp Character.cpp Mario.cpp Yoshi.cpp -o polymorphism_project


Run:
 ./polymorphism_project



Tests
Functionality:
Accelerate and brake behavior for Mario and Yoshi.
Polymorphic behavior of WhatAmI() in mixed containers.
Performance:
Validate Yoshi's faster acceleration using timing comparisons.
Memory Leaks:
Verify with tools like valgrind:
 valgrind --leak-check=full ./polymorphism_project



Files
Character.h / Character.cpp: Base class implementation.
Mario.h / Mario.cpp: Mario class implementation.
Yoshi.h / Yoshi.cpp: Yoshi class implementation with crest functionality.
main.cpp: Entry point for testing and simulating the race.
README.md: Project documentation.

Submission Instructions
Prepare a Bare Clone:
 git clone --bare <repository-path> el_hajji.git


Create Archive:
 tar -czvf polymorphism_el_hajji.tgz el_hajji.git


Upload: Use FileSender to upload the archive and send the link to:
david.parsons@inria.fr
sebastien.valette@creatis.insa-lyon.fr

Deadline
The project must be submitted by January 19, 2025.

Author
Ouiam El Hajji
 BIM - INSA Lyon
 Course: Software Development


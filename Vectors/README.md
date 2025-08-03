## VECTORS in CPP

This directory contains the implementation of the Vectors in C++.
It includes various vector operations and algorithms that can be used for educational purposes or as a reference for implementing similar functionalities in other programming languages.

### Vector comes under the STL (Standard Template Library) in C++.

## Basic Components

- **Vector Class**: A predefined template class that provides a dynamic array implementation.
- **Vector**: A dynamic array that can grow and shrink in size.
- **Element**: An individual item stored in a vector.
- **Capacity**: The amount of space allocated for the vector, which may be larger than the current number of elements.
- **Size**: The current number of elements in the vector.

## Syntax

### Basic Syntax for Declaring a Vector in C++

```cpp
#include <vector>   // Include the vector header
using namespace std; // Use the standard namespace
vector<type> vector-name;// Declare a vector of a specific type
vector<int> vec={1, 2, 3, 4, 5}; // Declare and initialize a vector of integers
vector<string> str_vec={"Hello", "World"}; // Declare and initialize a vector of strings
vector<type> vector-name(size); // Declare a vector with a specific size
vector<type> vector-name(size, value); // Declare a vector with a specific size and initial value
```

### Syntax for pushing an element into a vector

```cpp
vector-name.push_back(value); // Add an element to the end of the vector
vector-name.insert(position, value); // Insert an element at the specified position
```

### Syntax for accessing elements in a vector

```cpp
vector-name[index]; // Access the element at the specified index
```

### Syntax for iterating through a vector

```cpp
for (int i = 0; i < vector-name.size(); i++) {
    // Access each element using vector-name[i]
}
or
for (auto it = vector-name.begin(); it != vector-name.end(); ++it) {
    // Access each element using *it
}
or
for (const auto& element : vector-name) {
    // Access each element directly
}
```

### Syntax for removing an element from a vector

```cpp
vector-name.erase(index); // Remove the element at the specified index
vector-name.pop_back(); // Remove the last element from the vector
```

### Syntax to see the value at the front and back of a vector

```cpp
vector-name.front(); // Access the first element
vector-name.back();  // Access the last element
```

### Syntax to see the last inserted element in a vector

```cpp
vector-name.back();  // Access the last element
```

### Syntax for resizing a vector

```cpp
vector-name.resize(new_size); // Change the size of the vector
vector-name.reserve(new_capacity); // Reserve space for a new capacity
```

### Syntax for clearing a vector

```cpp
vector-name.clear(); // Remove all elements from the vector
```

### Syntax for checking if a vector is empty

```cpp
if (vector-name.empty()) {
    // The vector is empty
}
```

### Syntax for getting the size and capacity of a vector

```cpp
size_t current_size = vector-name.size();      // Get the current size of the vector
size_t current_capacity = vector-name.capacity(); // Get the current capacity of the vector
```

### Syntax for sorting a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
sort(vector-name.begin(), vector-name.end()); // Sort the vector in ascending order
```

### Syntax for reversing a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
reverse(vector-name.begin(), vector-name.end()); // Reverse the vector
```

### Syntax for finding an element in a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
if (find(vector-name.begin(), vector-name.end(), value) != vector-name.end()) {
    // Value found in the vector
}
else {
    // Value not found in the vector
}
```

### Syntax for copying a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
vector<type> new_vector = vector-name; // Copy the original vector
```

### Syntax for swapping two vectors

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
swap(vector-name1, vector-name2); // Swap the contents of two vectors
```

### Syntax for merging two vectors

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
vector<type> merged_vector;
merge(vector-name1.begin(), vector-name1.end(),
      vector-name2.begin(), vector-name2.end(),
      back_inserter(merged_vector)); // Merge two sorted vectors
```

### Syntax for checking if two vectors are equal

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
if (vector-name1 == vector-name2) {
    // Vectors are equal
}
else {
    // Vectors are not equal
}
```

### Syntax of resizing / slicing a vector with lower and upper bounds

```cpp
#include <vector>   // Include the vector header
using namespace std; // Use the standard namespace
vector<type> sub_vector(vector-name.begin() + lower_bound, vector-name.begin() + upper_bound);
// Create a sub-vector from the original vector using lower and upper bounds
```

### Syntax for finding the maximum and minimum elements in a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
auto min_max = minmax_element(vector-name.begin(), vector-name.end());
type min_element = *min_max.first;
type max_element = *min_max.second;
// Find the minimum and maximum elements in the vector
```

### Syntax for finding the maximum element in a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
auto max_element = *max_element(vector-name.begin(), vector-name.end());
// Find the maximum element in the vector
```

### Syntax for finding the minimum element in a vector

```cpp
#include <algorithm> // Include the algorithm header
using namespace std; // Use the standard namespace
auto min_element = *min_element(vector-name.begin(), vector-name.end());
// Find the minimum element in the vector
```

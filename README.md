# Off-by-one Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error occurs because the loop attempts to access an element beyond the valid range of the vector, leading to undefined behavior.

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

**How to reproduce:**

1. Compile `bug.cpp`.
2. Run the executable. Observe the potential crash or unexpected output.
3. Compile and run `bugSolution.cpp` to see the corrected behavior.

**Key Learning:**

Always ensure your loop conditions correctly handle the boundaries of your data structures. When iterating through vectors, remember that valid indices range from 0 to `vec.size() - 1`.
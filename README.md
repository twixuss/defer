# Single header defer statement implementation for c++14 or newer

## Example
```cpp
#include <defer.hpp>
int main() {
    char const *hello = "Hello";
    char const *world = "World";

    defer(
        printf("%s", world);
        printf("!\n");
    );
    
    defer(printf("%s ", hello));
}

// This will print "Hello World!"
```

## Tested on
```
msvc 19.14
gcc 4.9
clang 3.5
icc 16.0.3
```

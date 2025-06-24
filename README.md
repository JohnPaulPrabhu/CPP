# C++
### Contents
1. Basics
2. Strings
3. Maths

### Command to compile the package to import
> g++ -std=c++23 -fmodules-ts -c -x c++-system-header iostream

### Command to run the imported package
> g++ -std=c++23 -fmodules-ts  .\float_dtype.cpp -o .\float_dtype.exe; .\float_dtype.exe


### Points
1. Things to consider before using floating value. 
    - The size and precision of the **long double** can vary significantly across different systems and compiler
        - In some systems, **double** and **long double** uses same 64-bit
    - 0.1+0.1+0.1 is not necessarily equal to 0.3 due to precision limitations
        - long double 0.30000000000000001665
        - double 0.30000000000000004
    - If precision is critical, it is better to use integer instead of floating to avoid precision loss
    - If scaling is important then use float value
2. It is not possible to initialize the array of characters using "const char c[];" in struct.
    - We can initialize it by manually allocating memory for it. But that is not recommended.
    - Alternatively we can use pointer "const char* c {};"
3. When function is assined as const function, you can change any value in the body of the function
    - When you are creating a object for a class, and you are assinging a const qualifier to the object, there are two things can happen
     1. If you assign const qualifier to the funcion which is called by object, then code will run without issue
     2. If there is no const qualifier to the function, then the code will throw an error
## Operating Systems Memory Allocation Algorithm

This contains implementation of Memory Allocation Algorithms.

1. Best Fit
2. Worst Fit
3. First Fit
4. Next Fit

The programs outputs the block process_id is allocated to. Do you know any other algorithm which
is present in books mentioned that I missed writing here, open a issue in the repository
or a PR with the code following the current structure. For advanced readings implementation
see [this](https://github.com/tapasweni-pathak/Systems-Readings-Implementations/tree/master/AOS/Conferences).

#### Structure of files and Some code info on how to add a new algorithm implementaion
`struct.h` has a structure declaration and definition of a memeory unit and all files
uses the object and varibales in the structure.

Every algorithm is implemented as file-name.cpp.

#### To run the codes

Right now run like normal cpp code.

```cpp
g++ file_name.cpp
./a.out
```

or if you want to provide output file

```
g++ -o output file_name.cpp
./output.out
```

#### TODO
1. Error handling and messages
2. Run C++ code like executable or add a Makefile

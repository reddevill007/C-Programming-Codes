/*
    The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime. Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file.

    1) malloc()
    2) calloc()
    3) realloc()
    4) free()

    <=== static memory allocation ===>
    1) memory is allocated at compile time.
    2) memory can't be increased while executing program.
    3) used in array.

    <=== dynamic memory allocation ===>
    1) memory is allocated at run time.
    2) memory can be increased while executing program.
    3) used in linked list. 

    ==> Memory assigned to a program in a typical architecture can be broken down into four segments:
    1) Code
            => Text segment

    2) Static/global variable
            => data segment (intialized segment)
            => bss(block started by symbol) segment (unintialized segment)

    3) Stack
            => static memory
            => stack frame: list of all the storage(variable)
               -> Intially some memory is reserved for main() in the stack. This is known as stack frame of main
            => LIFO(Last in first out)

    4) Heap
            => dynamic memory

    <=== Stack Overflow ===>
    -> compiler allocates some space for stack part of the memory
    -> when this space gets exausted for some bad reason, the situation is called stack overflow
    -> Typical example include recursion with wrong base condition
        eg: void  func(){
                func();
            }

    <=== Use of Heap ===>
    -> There are lot of limitation of stack(static memory allocation)
    -> Some of the example include variable sized array, freeing memory no longer required etc.
    -> Heap can be used flexibly by the programmers as per his needs
    -> We can create a pointer in our main function and point to a memory block in the heap
    -> The address is stored by the local variable in the main function
    -> The memory consumed will not get free automatically in case we overwrite the pointer
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("NOTES");
    return 0;
}
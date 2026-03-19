

void stack_func()
{
    int a = 10; // Allocated on the stack.
} // 'a' is automatically destroyed at the end of the scope (LIFO).

void freeStore_func()
{
    int *p = new int{10}; // Allocated on the free store (p points to the address).

    /* ... */

    // delete p;

} // Memory for '10' persists, but pointer 'p' is lost (Memory Leak / Orphaned Memory).
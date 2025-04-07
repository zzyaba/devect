# devect
A double headed vector
```cpp
template<typename Type>                        The data type stored in a devect.
struct devect
long long capacity_back()const                 Returns the number of elements that the vector could contain **without** allocating more storage and **adding elements at the begin**.
long long capacity_front()const                Returns the number of elements that the vector could contain **without** allocating more storage and **adding elements at the end**.
void push_front()                              Deletes the element at the **begin** of the vector.The index will still start at **0**.
void push_front(const Type&value)
void push_front(Type&&value)                   Adds an element to the end of the vector.The index will still start at **0**.
void reserve_back(long long count)             Reserves a minimum length of storage for a devect object at the **end**, allocating space if necessary.
void reserve_front(long long count)            Reserves a minimum length of storage for a devect object at the **begin**, allocating space if necessary.
```

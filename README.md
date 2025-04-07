# devect
The combanition between std::deque and std::vector.
## What can it do?
It combines the advantage of std::deque and std::vector - you can push/pop at the both sides while you can still access randomly.
## What's added(compared to vector)?
```capacity_back()/capacity_front()```Returns the number of elements that the vector could contain **without** allocating more storage and adding elements **at the begin/end**.

```pop_front()```Deletes the element at the begin of the vector.The index will still start at 0.$O(1)$ of course.

```push_front()```Adds an element to the end of the vector.The index will still start at 0.$O(1)$ too.

```reserve_back()/reserve_front()```Reserves a minimum length of storage for a devect object at the end/begin, allocating space if necessary.

```pop_front_element()```Deletes the element at the begin of the vector and return it.
## Why "devect"?
It stands for Double Ended VECTor.

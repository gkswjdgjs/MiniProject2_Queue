Queue Testing

1. Enqueue Until Full
- Capacity = 5
- Insert 5 elements -> works.
- Insert 6th element -> overflow error expected --> works.

2. Dequeue Until Empty
- Remove all elements
- Additional dequeue -> underflow error expected -> works.

3. Wrap-Around Test
Steps:
1. Enqueue 1,2,3,4,5
2. Dequeue twice
3. Enqueue 6,7
Expected: 3 4 5 6 7
Queue order = 3 4 5 6 7
circular indexing works.

4. Mixed Operations
enqueue(10)
enqueue(20)
dequeue()
enqueue(30)
peek()
enqueue(40)
dequeue()

mixed operation works.
Dan Ndung'u
EB3/66967/23

# SpaghetiSort
A program to sort a list of integers using spagheti sort.

It is a theoretical sorting algorithm where uncooked spaghetti is used to sort numbers.
Equal strands of spaghetti are provided and hang from top depending on the integers provided.
If the number is 5, 8, 6, 7, 5 strands are hanged vertically then 8, 6 and 7 follow.
when one lowers their hand and touches the lowest tip the highest number is picked removed and noted from the strands.
The process is repeated till all are picked.
The sorted numbers would be 8, 7, 6, 5 at the end. 
It’s not used in real programs but used to explain sorting algorithms😂 

total comparisons = (n(n - 1) / 2).
Best case =  (O(n²)) this is when the array is already sorted.
Average case = (O(n²)) this is when elements are arranged randomly. 
Worst case = (O(n²)) this is when the elements are in reverse of when sorted.
The time complexity always remains the same since the algorithm always searches the entire portion to find its target.

Space complexity = O(1).
it has constant space since it only sorts the array in place without creating any additional data structures that grow with input size.

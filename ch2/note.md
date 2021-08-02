# Chapter 2.

## Insertion Sort

* Input: A sequence of n numbers <a1,a2,.....,an>

* Output: A permutation (reordering) <a1',a2',......,an'> of the input sequence such that a1'<=a2'<=...<=an'

* a1->an also known as keys

* Desciption: Insertion sort works the way many people sort a hand of
playing cards. We start woth an empty left hand and the cards face down the tables. Removing one card at a time from the table and insert it into the correct position in hands.

* In-place sorting

* Pseudocode:

INSERTION-SORT:

```
	for j=2 to A.length
		key=A[j]
		//Insert A[j] into the sorted sequence A[1....j-1]
		i=j-1
		while i>0 and A[i]>key
			A[i+1]=A[i]
			i=i-1
		A[i+1]=key
```

* Loop Variant: a method to check algorithm (like mathematical induction) 

	* Initialization: It is true prior to the first iteration of the loop.

	* Maintenance: If it is true before an iteration of the loop, it remains true before the next iteration.
	
	* Termination: When the loop terminates, the invariant gives us a useful property that helps show that the algorithm is correct.

* Insertion Sort Loop Variant:

	* Initialization: When j=2, the subarry A[1...j-1]holds one element A[1], and it's sorted.

	* Maintenance: Showing that each iteration maintains the loop invariant. For loop works by moving A[j-1], A[j-2], A[j-3], and so on by position to the right until it finds the proper position for A[j]. The subarray A[1...j] then consists of the elements originally in A[1..j], but in sorted array.

	* Termination: The condition causing the for loop to terminate is that j >A:length=n. That is to say  j = n+1. Then, A[1..n] consists of the original elements which are sorted by the algorithm.  

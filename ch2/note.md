# Chapter 2.

## Insertion Sort

* Input: A sequence of n numbers <a1,a2,.....,an>

* Output: A permutation (reordering) <a1',a2',......,an'> of the input sequence such that a1'<=a2'<=...<=an'

* a1->an also known as keys

* Desciption: Insertion sort works the way many people sort a hand of
playing cards. We start woth an empty left hand and the cards face down the tables. Removing one card at a time from the table and insert it into the correct position in hands.

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

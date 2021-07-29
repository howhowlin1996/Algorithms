# Chapter 2.

## Insertion Sort

* Input: A sequence of n numbers <a1,a2,.....,an>

* Output: A permutation (reordering) <a1',a2',......,an'> of the input sequence such that a1'<=a2'<=...<=an'

* a1->an also known as keys

* Desciption: Insertion sort works the way many people sort a hand of
playing cards. We start woth an empty left hand and the cards face down the tables. Removing one card at a time from the table and insert it into the correct position in hands.

* Pseudocode:

INSERTION-SORT.A/
1 for j D 2 to A:length
2 key D AOEj 
3 // Insert AOEj  into the sorted sequence AOE1 : : j  1.
4 i D j  1
5 while i > 0 and AOEi > key
6 AOEi C 1 D AOEi
7 i D i  1
8 AOEi C 1 D key


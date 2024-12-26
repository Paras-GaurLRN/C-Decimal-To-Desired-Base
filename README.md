# C-Decimal-To-Desired-Base

This algorithm converts any number from decimal base to any desired natural number non-one base.

Also, this algorithm does so with the minimum amount of memory required.

-> Time Complexity ~ O(log(Number)/log(Base))
-> Space Complexity ~ O(log(Number)/log(Base))
-> Auxilary Space = (floor(log(number_value)/log(base))+1) * (Size of char) [~ Ω(log(Number)/log(Base))]
-> Input Space ~ O(1)

Given in the repo is an example file which converts a number from Decimal to Hex.

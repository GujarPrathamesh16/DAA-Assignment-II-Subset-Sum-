# DAA-Assignment-II Subset-Sum
This code provides solution to the Subset Problem using Dynamic Programming approach.


## PROBLEM STATEMENT - 
Sum of Subset problem using Dynamic Programming approach.

## DESCRIPTION OF SOLUTION - 
The solution to this problem follows backtracking approach and builds the solution in chunks or steps, that is at every step the algorithm checks the condition and if the condition satisfies it further moves adding the state to the solution, however if the condition is not satisfied then the algorithm is returns to the previous state and again checks the constraints/condition on another set of values and follows the same procedure to build an effective solution.


## TEST CASES - 
### Message Verification :
A sender A wants to send messages to a receiver B. Keeping the message secret is not important. However, B wants to be sure that the message he is receiving is not from an imposter and has not been tampered with. $A$ and $B$ agree on a set of $a_i$ (say 500) and a set of totals $T_j$ (say 200). These numbers may be known publicly, but only A knows which set of values present in set of totals can be obtained from the array a as sum and which one of them are to be ignored. The message sent by $A$ is a subset of size 100 of $\{1,\dots,200\}$. He does this by sending 100 subsets of the $a_i$ corresponding to the message he wants to send.
<br>
Consider the following encryption, that integers which could be obtained as a sum are prime numbers such that (number%3 == 2) i.e. The only [5,11,17,....83] can be obtained by adding certain set of values from A.<br>
Hence the reciever only checks for these integers to obtain as sum, and can easily verify if the message is being tampered in between.
#### Input - <br>
A = {2,3,4,6,1,9,8,17,20,33,45,54}; <br>
B = {1,4,5,11,15,17,22,23,45,61,79,83,86,101};


### Gift Boxes :
Lets assume a scenario where a shop A has recieved an order to pack items such that they sum to a given amount x. The Subset Sum Algorithm is required when this has to be done on a larger scale and items having different prices are to be sacked together. The basic idea is that we are given a total amount to be paid irrespective of the items in the gift box ensuring the cost sums up to the given amount.

cost of items - 20,30,50,100,300,250,120,180,90,200 (in rupees) <br>
The required total amount is 500 ruppes i.e. x=500.

#### Input - <br>
cost = {20,30,50,100,300,250,120,180,90,200}
#### Output Screenshots
![alt text](https://github.com/GujarPrathamesh16/DAA-Assignment-II-Subset-Sum-/blob/main/Screenshot%20(17).png)

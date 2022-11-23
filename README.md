# DAA-Assignment-II Subset-Sum
This code provides solution to the Subset Problem using Dynamic Programming approach.


## PROBLEM STATEMENT - 
Sum of Subset problem using Dynamic Programming approach.

## DESCRIPTION OF SOLUTION - 
The solution to this problem follows backtracking approach and builds the solution in chunks or steps, that is at every step the algorithm checks the condition and if the condition satisfies it further moves adding the state to the solution, however if the condition is not satisfied then the algorithm is returns to the previous state and again checks the constraints/condition on another set of values and follows the same procedure to build an effective solution.


## TEST CASES - 
### Message Verification :
A sender (S) wants to send messages to a receiver (R). Keeping the message secret is not important. However, R wants to be sure that the message he is receiving is not from an imposter and has not been tampered with. $S$ and $R$ agree on a set of $a_i$ (say 500) and a set of totals $T_j$ (say 200). These numbers may be publicly known, but only $S$ knows which subsets of the $a_i$ correspond to which $T_j$. The message sent by $S$ is a subset of size 100 of $\{1,\dots,200\}$. He does this by sending 100 subsets of the $a_i$ corresponding to the message he wants to send.


### Gift Boxes :
Lets assume a scenario where a shop A has recieved an order to pack items such that they sum to a given amount x. The Subset Sum Algorithm is required when this has to be done on a larger scale and items having different prices are to be sacked together. The basic idea is that we are given a total amount to be paid irrespective of the items in the gift box ensuring the cost sums up to the given amount.

cost of items - 20,30,50,100,300,250,120,180,90,200 (in rupees) <br>
The required total amount is 500 ruppes i.e. x=500.

#### Input - <br>
cost = {20,30,50,100,300,250,120,180,90,200}
#### Output Screenshots
![alt text](https://github.com/GujarPrathamesh16/DAA-Assignment-II-Subset-Sum-/blob/main/Screenshot%20(17).png)

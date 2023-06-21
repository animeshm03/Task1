In the first part, one can think of inversions as a combination of transpositions. It is not difficult to see that parity of transpositions and inversions are the same. You can determine this parity by counting the number of swaps required to make orginal array (increasing order).

The second part of the problem can be approached using dynamic programming. By building a table or an array to store the maximum interest for each credit limit, you can iteratively calculate the maximum interest at each step based on the previously computed values.

1. Start by sorting the courses based on their interest parameter in descending order. This step ensures that we prioritize selecting courses with higher interest values. Create a dynamic programming table or an array to store the maximum achievable interest for different credit limits. The table will have dimensions [number of courses $+$ $1$] $\cdot$ [credit limit $+$ $1$]. Initialize all values in the table to $0$.

2. Traverse through the sorted courses one by one. For each course, iterate over the credit limits from $1$ up to the given credit limit. At each credit limit, consider two possibilities:
        
        * If the current course's credit is less than or equal to the credit limit, check if including the current course yields a higher interest than not including it. If it does, update the corresponding value in the table with the maximum interest.

        * If the current course's credit exceeds the credit limit, skip the course and use the maximum interest from the previous credit limit.

3. Once the dynamic programming table is populated, the maximum interest achievable while staying within the credit limit will be stored in the table at the position [number of courses][credit limit]. Retrieve and return this maximum interest value.

The time complexity of this approach is $O(n \cdot c)$, where $n$ is the number of courses and $c$ is the credit limit, which, in our case, is bounded above.
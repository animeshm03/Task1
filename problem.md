<b>Picking Courses</b>

input: standard input

output: standard output

time limit per test: 1 second

memory limit per test: 256 megabytes

New semester is approaching and you have to register for the courses you are going to do. Among all the courses you can choose from, each course has certain credits and an interest parameter associated with it. This parameter denotes the amount of enthusiasm you have for that course. Your goal is to pick courses such that you maximize overall enthusiasm towards courses while staying within the credit limit of $65$.

But there is catch. You are given the sequence of courses, $i.e.$ permuatation from $1$ to $n$. If number of inversions in this permutation is odd, then you can choose courses only up to limit of $50$ credits.

An inversion is there when for $i$ and $j$ ($1 \le i < j \le n$), $a_i>a_j$ in a sequence.

**Input**

The input consists of multiple test cases. The first line contains an integer 
$t$ ($1 \le t \le 10^5$) --- the number of test cases. Then $t$ test cases follow.

The first line of each test case contains a single integer $n$ ($1 \le n \le 10^5$) --- the number of courses to choose from.

The second line contains the permutation from $1$ to $n$.

The next line contains $n$ integers $a_1, a_2, \dots, a_n$ such that $1 \le a_1 \le a_2 \le \dots \le a_n \le 10^9$. Here $a_i$ denotes the amount of interest you have in $i^{th}$ course.

The last line of each test case contains $n$ integers $c_1, c_2, \dots, c_n$ ($1 \le c_i \le 65$) --- where $c_i$ is the number of credits of $i^{th}$ course.

**Output**

Print the maximum possible interest parameter you can achieve while selecting courses.

**Example**

**input**
~~~
3
3
3 2 1
10 30 50
36 24 12
4
1 4 2 3
50 100 100 250
20 30 10 15
5
3 1 4 5 2
2 5 5 6 20
60 75 10 32 60
~~~
**output**
~~~
80
450
20
~~~

**Note**

In the first example, the number of inversions is odd, therefore credit limit is 50. The choice that yields the maximum interest parameter is picking the second and third courses. This choice leads to $36$ ($\le50$) credits. If were to select the first course as well, we would have exceeded the credit limit.
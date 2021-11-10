# WEEK 4

## Tasks

- [ ] 1. Reverse the given input array 

        Input: array = [1,2,8,5]
    
        Output: [5,8,2,1]

- [ ] 2. Count Frequency of every element of the array

        Input: 
        arr[] = {1,2,3,2,4,1,4,1,4}
        
        Output:
        1 - 3 times
        2 - 2 times
        3 - 1 times
        4 - 3 times

- [ ] 3. Rotate the array by “k” steps in right direction

        Input: 
        arr[] = {1, 3, 4, 5, 7}, k = 3
        Arr[] = {5, 6, 7, 3, 4, 2}, k = 26
        
        Output: 
        arr[] = {4, 5, 7, 1, 3}
        Arr[] = {4, 2, 5, 6, 7, 3}

- [ ] 4. Two sum

    Given an array of integer numbers and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice.
GIVEN ARRAY IS SORTED ARRAY.

        Input: 
        nums = [2,7,11,15], target = 9
        Output: 
        [0,1]
        Explanation: 
        Because nums[0] + nums[1] == 9, we return [0, 1].

        Input: 
        nums = [2,3,4], target = 6
        Output: 
        [0,2]

        Input: 
        nums = [3,3], target = 6
        Output: 
        [0,1]
- [ ] 5. SET 0,1,2 in an array

    You are given the array consisting of 0,1,2. You have to modify the array by setting all the 0’s in starting and all the 1’s in middle and all the 2’s at the end.

        Input: Array = [1,0,0,1,2,1,2,0,1]
        (Input Array consists of only 0,1,2)
        Output: [0,0,0,1,1,1,1,2,2]

- [ ] 6. Search Insert Position

    Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

        Input: arr[] = {1, 3, 5, 6},K=5
        Arr[] = {1,3,5,6},k = 2
        (Given array to be sorted)
        
        Output: 
        2
        1
        
        Explanation: Since 5 is found at index 2 as arr[2] = 5, the output is 2.
        As, 2 is not present but its possible position is index = 1 output is 1.

- [ ] 7. Odd Grasshopper

    The grasshopper is located on the numeric axis at the point with coordinates x0. 
Having nothing else to do he starts jumping between integer points on the axis. Making a jump from a point with coordinate x with a distance d to the left moves the grasshopper to a point with a coordinate x-d, while jumping to the right moves him to a point with a coordinate x+d.
The grasshopper is very fond of positive integers, so for each integer i starting with 1 the following holds: exactly i minutes after the start he makes a jump with a distance of exactly i So, in the first minutes he jumps by 1, then by 2, and so on.

    The direction of a jump is determined as follows: if the point where the grasshopper was before the jump has an even coordinate, the grasshopper jumps to the left, otherwise he jumps to the right.

    For example, if after 18 consecutive jumps he arrives at the point with a coordinate 7,he will jump by a distance of 19 to the right, since 7 is an odd number, and will end up at a point 7+19 = 26.Since 26 is an even number, the next jump the grasshopper will make to the left by a distance of 20 , and it will move him to the point 26-20 = 6

    Find exactly which point the grasshopper will be at after exactly n jumps.

        INPUT : The first line of input contains an integer t the number of test cases.
        Each of the following t lines contains two integers x0 and n -- the coordinate of the grasshopper's initial position and the number of jumps.

        OUTPUT : Print exactly t lines. On the i-th line print one integer — the answer to the i-th test case — the coordinate of the point the grasshopper will be at after making n jumps from the point x0

        TESTCASE:
        INPUT :                                        OUTPUT: 
        7                                                    
        0 1                                                     -1
        0 2                                                      1
        10 10                                                  11
        10 99                                                  110
        177 13                                                190
        1 0                                                      1                                                 
        -1 1                                                      0

# Problem: Could this BE any harder? 

This problem asks us to find the longest contiguous part of an array (a segment) where the range (the difference between the largest and smallest numbers) does not exceed a given value $K$.

---

### The Logic

NNote: Segment here mean subarray (Subarray is **a contiguous part of an array**, meaning the elements must be taken in their original order without skipping any).

The core idea is to check different segments of the array and verify if they are "balanced." A segment is balanced if:
$$\text{Maximum Element} - \text{Minimum Element} \le K$$

#### Brute Force Approach ($O(N^2)$)
Since the number of elements $N$ is up to 5000, a nested loop approach is efficient enough for this problem.
1.  **Outer Loop:** Pick a starting point $L$ for your segment.
2.  **Inner Loop:** Expand the segment by moving the end point $R$ to the right.
3.  **Track Extremes:** As you add each new element to the segment, keep track of the current `max` and `min` values found so far.
4.  **Check Condition:** At every step, check if `current_max - current_min <= K`.
    * If it is, update your `max_length` if the current segment ($R - L + 1$) is longer than the previous best.
    * If it is NOT, stop expanding this segment and move the starting point $L$ to the next index, because adding more elements will only keep the range the same or make it larger.


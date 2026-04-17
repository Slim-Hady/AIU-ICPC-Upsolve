# Problem: Creating Strings 

This problem asks us to take a given string and find every possible unique way to rearrange its characters (**permutations**). The results must be sorted alphabetically, and we need to count how many unique strings we found.

---

### The Logic

When we rearrange characters to form new strings, we are looking for **distinct permutations**. The constraint $n \le 8$ is very small, which means the total number of permutations will be small enough to generate and store (the maximum is $8! = 40,320$).

#### The Strategy
1.  **Sort the Input:** To ensure we generate the permutations in alphabetical order and handle duplicates easily, we should sort the characters of the original string first (e.g., `aabac` becomes `aaabc`).
2.  **Generate Permutations:** Use a recursive function (backtracking) or a built-in library function to find all ways to arrange the characters.
3.  **Handle Uniqueness:** Because some characters might be the same (like the three 'a's in `aabac`), different arrangements might result in the same string. Using a **Set** data structure or a specialized "next permutation" algorithm helps avoid duplicates.
4.  **Count and Print:** Store all unique strings in a list, print the size of the list, and then print each string.



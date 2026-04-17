# Problem: AIU ICPC Houses - Summary and Logic

This problem focuses on the concept of **equal distribution** and how to handle "remainders" when things don't divide perfectly.

---

### The Logic

You have a total of **$n$ students** and exactly **5 houses**. The goal is to distribute the students so that every house has almost the same number of people. 

To solve this, we use the math concept of **Ceiling Division**.

#### 1. Perfect Division
If the number of students ($n$) is a multiple of 5 (like 10, 25, or 100), every house gets exactly the same amount.
* **Example:** 100 students ÷ 5 houses = **20 students per house**.
* The maximum number in any house is **20**.

#### 2. Dealing with Remainders
If the number of students ($n$) is **not** a multiple of 5, some houses will inevitably have one extra student to ensure everyone is assigned a house.
* **Example:** 12 students.
    * $12 \div 5 = 2$ with a remainder of **2**.
    * This means all 5 houses get 2 students, and the 2 "leftover" students each go to a different house.
    * Distribution: House A (**3**), House B (**3**), House C (2), House D (2), House E (2).
* The maximum number in any house is **3**.



---

### The Mathematical Formula

To find the maximum number of students in a single house, you are essentially rounding up the result of the division. In programming, this is calculated as:

$$\text{Result} = \lceil \frac{n}{5} \rceil$$

A common "trick" to perform this ceiling division using only standard integer division is:
$$\text{Result} = \frac{n + 5 - 1}{5}$$

###  Key Takeaway
Whenever you need to distribute $X$ items into $Y$ groups as evenly as possible, the maximum number in any group will always be the **ceiling** of $(X / Y)$.

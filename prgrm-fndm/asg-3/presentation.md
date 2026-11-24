---
theme:
  name: catppuccin-mocha

  override:
    intro_slide:
      title:
        style: template
        font_size: 20
        height: 20
        
        

title: "**Happy _Numbers_ :)**"
sub_title: (Hoppy)
authors:
  - Hashir (26L-0558)
  - Uzair (26L-0582)
  - Ayaan (26L-0555)
---

What are happy numbers
===
A number whose digits' sum of squares eventually adds up to 1.

---
# Examples:

> 5 squares to 25
> 25 digts' square to 4 + 25 = 29
> 29 evaluates to 89 and so on... (never reaches 1)

But!!!
> 19 evaluates to 82
> 82 to 68, 68 to 100
> and 100 to 1 (yay! reached 1)

<!-- end_slide -->
So... How do we code it?
========================

Let us start with a basic function. Which returns true when its happy and false
when it is not.

<!-- column_layout: [2,1] -->
<!-- column: 0 -->
```file +line_numbers +exec  {1|2|4-6|8-12|14-16|17|all} +id:bad_code 
path: bad_code.cpp
language: cpp
```
<!-- column: 1 -->
<!-- snippet_output: bad_code -->

<!-- end_slide -->

Shortcomings of initial solution
===

What if it is not a happy number?

---
# Edge case
```cpp
checkHappy(4); // It gets stuck in an infinite loop
```
We get
```
4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4 -> 16 -> 37 ...
```

# Key Insight

> It can get stuck in an infinite loop.




<!-- end_slide -->

New Alogrithim

===
We keep track of previous numbers!

---
Just checking if n is repeating we can prevent infinite loops.
```html +line_numbers {2|3|4|5|6|7|8|9|10|11}
┌────────────────────────────────────────────────────────────────────────────────────┐
│    n    │      digits     │    new N    │     prev Numbers     │ Did Appear before │
│─────────│─────────────────│─────────────│──────────────────────│───────────────────│
│    4    │       4^2       │      16     │           4          │         No        │
│    16   │    1^2 + 6^2    │      37     │         4 16         │         No        │
│    37   │    3^2 + 7^2    │      58     │        4 16 37       │         No        │
│    58   │    5^2 + 8^2    │      89     │      4 16 37 58      │         No        │
│    89   │    8^2 + 9^2    │     145     │     4 16 37 58 89    │         No        │
│   145   │ 1^2 + 4^2 + 5^2 │      42     │   4 16 37 58 89 145  │         No        │
│    42   │    4^2 + 2^2    │      20     │ 4 16 37 58 89 145 20 │         No        │
│    20   │    2^2 + 0^2    │      4      │ 4 16 37 58 89 145 20 │        Yes        │
└────────────────────────────────────────────────────────────────────────────────────┘
```

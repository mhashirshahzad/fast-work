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
Output: 
<!-- snippet_output: bad_code -->

<!-- end_slide -->

Shortcomings of initial solution
===
What if it is not a happy number?

---
```cpp
checkHappy(4); // It gets stuck in an infinite loop
```
We get
```
4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4 -> 16 -> 37
```



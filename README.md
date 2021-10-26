# _Minimal Calendar_

> _Last Updated : Oct. 26, 2021_
---
     This code(written in C) can be used to know 
     the day of the entered date in DD/MM/YYYY format.
     This code works for invalid dates also but gives answer accordingly
     e.g., 32/12/2020 will be assumed as 01/01/2021
---
## Formula

Day is determined by counting no. of odd days.

Let N be the no. of odd days.

If N = 0, then **Sunday**

If N = 1, then **Monday**

If N = 2, then **Tuesday**

If N = 3, then **Wednesday**

If N = 4, then **Thursday**

If N = 5, then **Friday**

If N = 6, then **Saturday**


N is given by,

```C
N = (K + [ 2.6M - 0.2 ] + D + [ D/4 ] + [ C/4 ] - 2C ) mod 7,
```
where K = day, C = Centuries passed, D = year,
M = month, [x] is Greatest Integer less than or equal to x.
More details of this formula can be found at [here](https://en.wikipedia.org/wiki/Zeller%27s_congruence "Zeller's Congruence")

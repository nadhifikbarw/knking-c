# Solutions

In C89, to answer this you have to ses that `%` operator depends on `/` operator internally where `a%b = a - (a/b) * b`.


(a) 8 % 5 => 3

(truncation behavior involving negative operand in C89 is considered implementation detail)

(b) -8 % 5 => -3 (rounded towards 0) or 2 (rounded away from 0)

To demonstrate further these 2 possible outputs, let's breakdown (b) answers by exploring both rounding scenarios on `(a/b)` expression used by `%` operation.


```
Implementation where `a/b` expression with negative operands rounded towards 0

-8 % 5

=> -8 - (-8/5) * 5
=> -8 - (-1 * 5)
=> -8 - (-5)
=> -3
```

```
Implementation where `a/b` expression with negative operands rounded away from 0

-8 % 5

=> -8 - (-8/5) * 5
=> -8 - (-2 * 5)
=> -8 - (-10)
=> 2
```

(c) 8 % -5 => 3 or -2

(d) -8 % -5 => -3 or 2

# Solutions

The for loop `expr1` uses `,` operator where it ultimately sets `i=5`  and `j=4`.

The for loop `expr2` also uses `,` operator, since we know that value of `expr1` when using `,` operator will be discarded, only the value of
`j > 0` will be relevant for the for loop control flow.

The for loop `expr3` also uses `,`  operator, with its first expression
decrement `i` by one after each loop body execution, and set j as `i-1`

Hence this prints out

```
5 4 3 2
```

Check using `1.c`

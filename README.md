# C Exercises

My solutions and notes for K. N. King's "C Programming: A Modern Approach", second edition.

## Zettels

Collection of short notes

### C assignment is an operator
```c
char c;
while((c = getchar()) != EOF) {
  // Do stuff
}
```
Hence, be careful of side effects:
```c
// Expession such as:
i = j = k = O;
// is equal to
i = (j = (k = 0));
// Because `=` operator is right associative
```
Be careful of implicit conversions:
```c
int i;
float f;

i = f = 33.3f;
// f assigned as 33.3
// i equals to 33 due to implicit conversion
```

### Beware of operators for logical expressions

Just like assignment operator, in order to build logical expression we use several operators (e.g. <, >, <=, >=, ==, !=, &&).

When building these expressions, always be aware that each operator will produce an output (0, 1) and might cause unexpected behavior

```c
// These expressions are completely legal.
i < j < k
(i < j) < k // Since < operator produces 0 or 1, the second < resolves into 1 < k;
```

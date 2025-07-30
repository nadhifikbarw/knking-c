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

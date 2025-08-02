# C Exercises

My solutions and notes for K. N. King's "C Programming: A Modern Approach", second edition.

## Takeaways

_Holding myself back to keep doing exercises and projects from this book that might seem rudimentary from problem-solving perspective has given me more opportunity to focus on experiencing C's rough edges. Tasting its edges provide the appropriate context and historical reasoning that inform me when thinking about C code quality._

_Being small but unrestricted language put the extra emphasis on understanding where and when to push the language strength. Having familiarity with rough edges of C as annoying as it might be (compared to language such as Rust, Zig, Odin) is still good investment for me, as C is still the backbone of a lot of modern software with how much code written in it_

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
// Expression such as:
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

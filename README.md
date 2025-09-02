# C Exercises

My solutions and notes for K. N. King's "C Programming: A Modern Approach",
second edition.

## Takeaways

_Exercises and projects from this book might seem rudimentary from "problem difficulty" perspective, but these practices have given me more opportunity to focus on experiencing C's rough edges. Tasting its edges, providing the appropriate contexts and historical reasoning that inform me better about the evolution of C language and modern languages inspired by it._

_Being small, spartanic, and unrestricted language put the emphasis on knowledge on where and when to push the language features. Having familiarity with rough edges of C, as annoying as it might be (compared to language such as Rust, Zig, Odin), is considered a good investment for me. As C is still the backbone of a lot of modern software with how much code written in it._

_During this learning process, avoiding as much assumptions as possible about the language has been proven beneficial, this assumptions appear trivial and "odd" compared to more modern languages, such as the case of doing scoped variable declaration within the first expression of `for` statement. This syntax is very common in modern languages, but C89 doesn't allow it. This is the kind of nuanced takeaway that can effectively be learned when avoiding assumption about the language by using the language building blocks thoroughly._

_Many pitfalls and rough edges of C can be quite unruly to experience, but various documentations from the community over the years have been proven helpful to capture many essences of C, additional resources such as [C-FAQ](https://www.c-faq.com/decl/index.html) or [CPP Reference](https://cppreference.com/) are good places to explore further._

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

### Invalid variable declaration in C89 in `for`

In many modern languages, having variable declaration in the first expression
of a `for` loop is very common. Here's an example using Go.

```go
// Example in Go
for i := 0; i < 10; i++ {
  sum += i
}
```

When using `-std=c89` declaring variable in the first expression is not allowed.

```c
#include <stdio.h>
int main(void) {
    for (int n = 0; n < 10; n++) printf("%d", n);
}
```

GCC will produce error such as `‘for’ loop initial declarations are only allowed in C99 or C11 mode`.




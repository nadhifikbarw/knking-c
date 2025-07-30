# Solutions

Whitespace/newline in `scanf` format argument will seek to match 0 or more whitespaces. But, by providing whitespace/newline at the end of the format argument (e.g. `%d\n` or `%d `) will cause such function call to keep scanning for input after newline/enter is inputted indefinitely until non whitespace character is inputted. As example `%d\n` will terminate given this input pattern:

```
10       \n\n\n\n t\n    <- Multiple whitespaces and newlines will keep being matched until non-whitespace character is inputted after
```

Hence only (c) is considered not equivalent.

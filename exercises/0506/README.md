# Solutions

Yes the statement below is legal

```c
if (n == 1-10) printf("n is between 1 and 10\n");
```

As it follows

```
if (expr) single_statement_cause_no_{}_braces;
```

However its logical expression won't resolve as expected when `n = 5`, it results in `0` because it resolve left-right operands resulting in `5==-9`, thus skipping `printf`.

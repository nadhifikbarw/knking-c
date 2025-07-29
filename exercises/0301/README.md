# Solutions

```c
#include <stdio.h>

int main(void) {
    printf("(a)\n%6d, %4d\n", 86, 1040);
    printf("(b)\n%12.5e\n", 30.253);
    printf("(c)\n%.4f\n", 83.162);
    printf("(d)\n%-6.2g", .0000009979);
    return 0;
}
```

Output:

```
(a)
    86,1040 # 6-length left-padded and 4 length digits
(b)
 3.02530e+01 # 10-length with 5-digits minimal after decimal point (1 space in front can be seen as left pad to satisfy 10-len)
(c)
83.1620 # unbounded-length,  minimal 4-digits after decimal point
(d)
1e-06   # 6-length overall decimal/exponential form, in this case it chooses exponential form
```

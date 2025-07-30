# Solutions

Given `i`, `j` are positive integers. Whether `(-i)/j` will always be equal to `-(i/j)` is considered implementation details. When compiling using `-std=c89`, the first expression contains division of negative int value. In C89 integer division behavior depends on implementation. As example `i=9; j=7` where `(-9)/7` mathematically `-1.2857...` so it could either get truncated to `-1` or `-2`.

For C99, the first expression produces consistent results. As division operation using negative int value always get truncated toward zero. Hence it's consistent with mathematical result.

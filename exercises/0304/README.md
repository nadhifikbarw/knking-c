# Solutions

Step-by-step breakdown of `%d%f%d` scanning with `10.3\w5\w6` as input, `\w` indicates whitespace:

1. Scanning the first `%d`, input `12.\w` will be read from buffer, `12` will be assigned into `i` variable, the subsequent `.` can't be processed for `%d`, hence it's "returned back" into buffer for next read.
2. Scanning the second `%f`, input `.3\w` will be read from buffer, `.3` will be assigned into `x` variable. The subsequent `\w` character can't be processed for `%f`, hence it's "returned back" into buffer for next read.
3. Scanning the last `%d`, input `\w5\w` will be read from buffer. The first `\w` will be skipped, `5` assigned into `j` variable. The subsequent `\w` can't be processed for `%d`, hence it's "returned back" into buffer for next read.
4. `\w6` is now left in buffered input for next read.

For demonstrative purpose `scan4.c` showcases subsequent `scanf` `%d` read. When running the program using the same input above. The `scanf` for `discarded` will not prompt further user input.

# Solutions

Step-by-step breakdown of `%f%d%f` scanning with `12.3\w45.6\w789` as input, `\w` indicates whitespace:

1. Scanning the first `%f`, input `12.3\w` will be read from buffer, `12.3` will be assigned into `i` variable, the subsequent `\w` can't be processed for `%f`, hence it's "returned back" into buffer for next read.
2. Scanning the second `%d`, input `\w45.` will be read from buffer, the first `\w` is skipped, `45` assigned into `x` variable. The subsequent `.` character can't be processed for `%d`, hence it's "returned back" into buffer for next read.
3. Scanning the last `%f`, input `.6\w` will be read from buffer. `.6` assigned into `y` variable. The subsequent `\w` can't be processed for `%f`, hence it's "returned back" into buffer for next read.
4. `\w789` is now left in buffered input for next read.

For demonstrative purpose `scan5.c` showcases subsequent `scanf` `%d` read. When running the program using the same input above. The `scanf` for `discarded` will not prompt further user input.

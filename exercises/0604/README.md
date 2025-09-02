# Solutions

The (c) for loop will not produce the same effects as (a and b), while the check expression will be effectively the same for all three.

The effect inside loop body will differ, since increment of i happen prior to the loop body execution, it impacts i value during loop body execution unlike (a) and (b) where such increment is performed after loop body execution.

See `1.c` for proofs

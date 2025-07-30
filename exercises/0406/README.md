# Solutions

In C99 rounding behavior for division with negative operands is enforced to round result towards 0 hence when resolving formula used for modulo operator `a%b = a - (a/b) * b` we get only one possible result, unlike C89.

(a) 8 % 5 => 3

(b) -8 % 5 => -3

(c) 8 % -5 => 3

(d) -8 % -5 => -3

As rule of thumb, the resulting value of `a%b` will always be in the same sign as `a` operand.

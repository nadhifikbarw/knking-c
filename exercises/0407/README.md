# Solutions

Since the result of `total % 10` will produce range between 0-9. The -1 adjustment by the original algorithm from total_sum BEFORE taking reminder is needed to ensure whenever such reminder returns 0 and used to produce final check digit by subtracting `9` instead of `10`, as such the formula being used should stay `9 - reminder` to produces single check digit.

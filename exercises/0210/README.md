# Solution

Original `dweight.c` from the book

```c
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

C compiler only requires space between `#include` and `<stdio.h>`, and line break after top-level comment and `<stdio.h>` in order to make this compileable. Directives don't use `;` punctuation hence putting each in new line is necessary.

For demonstration, `oneliner.c` contains the same program with any OPTIONAL spaces and linebreaks stripped.

```c
/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>
int main(void){int height, length, width, volume, weight;height = 8;length = 12;width = 10;volume = height * length * width;weight = (volume + 165) / 166;printf("Dimensions: %dx%dx%d\n", length, width, height);printf("Volume (cubic inches): %d\n", volume);printf("Dimensional weight (pounds): %d\n", weight);return 0;}
```



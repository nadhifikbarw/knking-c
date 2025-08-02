# Solution

The `1a.c` source includes `//`-style comments. When using `-ansi` flag (a.k.a `-std=c89`) compiler will emit error

```sh
$ gcc -ansi exercises/0201/1a.c

exercises/0201/1a.c:3:1: error: C++ style comments are not allowed in ISO C90
    3 | // 1a.c is the original program given by the book to be compiled to observe
      | ^
exercises/0201/1a.c:3:1: note: (this will be reported only once per input file)
```

No error nor warning will be emitted when compiling this program without any flag. This is because by default, `gcc` doesn't conform to any ANSI/ISO C standard, it uses C standard with GNU extensions (e.g `gnu99`, `gnu11`)

```sh
$ gcc exercises/0201/1b.c -o out/e0201a
```

`1a.c` will compile without any warning/error with `-std=c99`. As comparison about standard, [Linux Kernel only move to `-std=gnu11` in 2022](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/commit/?id=e8c07082a810fbb9db303a2b66b66b8d7e588b53)

For demonstration purpose, `1b.c` contains acceptable implementation for `-std=c89` or `-ansi` by swapping `//` into `/*` comment style and return value for `main()`

```sh
$ gcc -ansi exercises/0201/1b.c -o out/e0201b
```


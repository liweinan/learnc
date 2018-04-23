```bash
$ ls
1.c   2.c   foo.c foo.h
```

```bash
$ cc 1.c
$ ls
1.c   2.c   a.out foo.c foo.h
```

```bash
$ ./a.out
a1
```

```bash
$ mv a.out 1.out
$ ls
1.c   1.out 2.c   foo.c foo.h
$ ./1.out
a1
```

```bash
$ cc 2.c foo.c foo.h
```

```bash
$ ls
1.c       2.c       a.out     foo.c     foo.h     foo.h.gch
```

```bash
$ ./a.out
Hello, world!
```

```bash
$ mv a.out 2.out
```

```bash
$ ls
1.c       2.c       2.out     foo.c     foo.h     foo.h.gch
```

```bash
$ ./2.out
Hello, world!
```

---

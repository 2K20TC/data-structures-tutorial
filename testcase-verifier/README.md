# testcase-verifier

## Introduction

This script verifies the test cases for coding problems in our tutorial/coding challenge series. A tutorial series, henceforth referred to as a "project", is a top-level directory that holds traditional programming problems, henceforth referred to as a "problem".

Each problem is a subdirectory that contains the test-cases and problem statement. The test-case input files are contained in the "test" subdirectory in the format `inx.txt`, where x denotes the xth test case. The sha1 hash of the corresponding output is contained in `opx_hashed.txt`.

The solution should be a single source file, named solution.c to be placed within the problem subdirectory.

For example, the directory tree may look like:

```
- tutorial1
  - problemset1
    - problem1
      - test
        * in1.txt
        * in2.txt
        * op1_hashed.txt
        * op2_hashed.txt
      * problem.pdf
      * solution.c
    - problem2
      - test
        * in1.txt
        * in2.txt
        * op1_hashed.txt
        * op2_hashed.txt
      * problem.pdf
      * solution.c
```

## Usage

The script should work on any POSIX compatible environment, but has been tested only on GNU/Linux and macOS Sierra. MSYS2/Cygwin should work, but has not been tested. As such, **Windows remains unsupported as of now**.

The prerequisites (other than sh) are:

- cat, mkdir, rm, sha1sum (GNU coreutils)
- find (GNU find)
- cc (GCC, Clang/LLVM)

### Command line

```checker.sh [-c CC ] [-d PATH] [-h] PROBLEM```

- `PROBLEM` denotes the problem subdirectory. In the example given above, `problemset1/problem1` is a valid candidate. In case any spaces appear in the directory name, `PROBLEM` should be quoted, or escapes should be used. For example, `"Arrays/1D Array"`.

- `-c CC` denotes the compiler to use. By default, it is set to `cc`, which should work in most cases.

- `-d PATH` denotes the project path. By default, it is set to the current directory. Use this option if the script is being invoked from outside the project directory.

- `-h` to display help contents.

#### Usage examples

```
checker.sh problemset1/problem
checker.sh -c gcc "Array/1D Array"
```

The first command verifies `problemset1/problem`. The second verifies `Array/1D Array` using `gcc` as compiler.

### Compiler suite

Any of the traditional Unix "cc" family of compilers should suffice. We leave it up to the user to ensure standards compliance and the like.

On GNU/Linux distros, we recommend using the GCC compiler suite, which is considered the de-facto compiler. The packages will be available on the offical repositories.

On macOS, the Clang/LLVM suite will be installed alongside Xcode. In case you do not have Xcode installed, or are reluctant to download the hefty package, you can make do with "Command Line tools for Xcode", a considerably smaller package that includes only the basic build tools. The package is available [here](https://developer.apple.com/download/more/).


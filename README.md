# dynlib-c

An example showing how to load dynamic libraries at runtime using C.
This allows dynamic code execution, useful when adding module/plugin support to an app.

## Build

Build using [CMake](https://cmake.org/) >= 3.5 with

```
mkdir build
cmake -D CMAKE_BUILD_TYPE=Release ..
make
```

This builds a main executable `dynlib` as well as two example libraries: `foo` and `bar`.

## Run

The main executable expect its first argument to be library to load:

```
./dynlib ./libfoo.so
```

or

```
./dynlib ./libbar.so
```

**NOTE:** This is Linux; on other platforms the name of the libraries may vary.

## License

This software is distributed under the terms of the
[GNU General Public License v3](https://www.gnu.org/licenses/gpl-3.0.en.html).

# cpptemplate

Description

# Installation

Clone the directory

```
git clone https://github.com/hgducharme/<APPNAME>.git
cd <APPNAME>/
```

Build the project

```
make
```

If successful, you should see the executable `/bin/<APPNAME>`

# Tests

To run the tests make sure you have [googletest 1.13.0](https://github.com/google/googletest/releases/tag/v1.13.0) installed on your system and `cmake` installed, then edit the Makefile to point to your installation of `googletest`.

To install `googletest`, download the zip file and unzip it, then

```
cd /path/to/googletest/
mkdir install
cd install/
cmake ..
make
make install
```

Next, edit the `GOOGLETEST` variable inside the makefile to point to where `googletest` was installed. Replace `/usr/local/lib` with the directory that houses your `libgtest.a` and `libgtest_main.a` files.

```
GOOGLETEST := -L/usr/local/lib -lgtest -lgtest_main
```

Build the tests using

```
make tests
```

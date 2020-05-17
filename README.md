# Data Structures
Common data structures implemented in C++ using Bazel for building and testing.

Check out `lib/stack.h` and `lib/queue.h` to view implementations of the stack and queue data structures, and navigate to `lib/test/stack-test.cc` and `lib/test/queue-test.cc` to have a look at each of their respective testing suites.

## To execute the test suite...
1. Clone the repository with `$ git clone https://github.com/alec-bell/data-structures`.
2. Install Bazel (for building and testing) with the following commands:
```
$ sudo apt install curl
$ curl https://bazel.build/bazel-release.pub.gpg | sudo apt-key add -
$ echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list
$ sudo apt update && sudo apt install bazel
```
3. Run the test suite with `$ bazel test //lib/test:all`.
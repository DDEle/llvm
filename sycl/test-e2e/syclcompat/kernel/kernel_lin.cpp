// REQUIRES: linux

// RUN: %clangxx -fPIC -shared -fsycl -fsycl-targets=%{sycl_triple} %S/Inputs/kernel_module.cpp -o %t.so
// RUN: %clangxx -DTEST_SHARED_LIB='"%t.so"' -ldl -fsycl -fsycl-targets=%{sycl_triple} %S/Inputs/kernel_function.cpp -o %t.out
// RUN: %{run} %t.out

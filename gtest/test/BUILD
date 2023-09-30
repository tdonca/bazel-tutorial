
# Define a unit test target

# This test is executed using the following command:
# bazel test --cxxopt=-std=c++14 --test_output=all "//test:hello_test" 
# the test target is referenced relative to the root of the workspace WORKSPACE file
# gtest currently requires c++14

cc_test(
  name = "hello_test",
  size = "small",
  srcs = ["hello_test.cc"],
  
  # @external-repo-name//root-path/to:target-name
  # This external dependency is defined in the WORKSPACE file
  deps = ["@gtest//:gtest_main"],
)
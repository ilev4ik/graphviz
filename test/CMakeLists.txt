cmake_minimum_required(VERSION 3.1.0)

include_directories(
    ${GTEST_SOURCE_DIR}
    ${GTEST_SOURCE_DIR}/include
)
add_executable(simple_unit_tests simple_tests.cpp)
target_link_libraries(simple_unit_tests gtest gtest_main)

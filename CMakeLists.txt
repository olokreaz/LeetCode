cmake_minimum_required(VERSION 3.26)
project(LeetCode)

set(CMAKE_CXX_STANDARD 23)

# fmt
find_package(fmt CONFIG REQUIRED)
# glm
find_package(glm CONFIG REQUIRED)

function(LeetCode name)
	add_executable(LeetCode_${name} src/${name}.cpp)
endfunction()

set(TARGETS)

#LeetCode("two-sum")
LeetCode("palindrome-number")
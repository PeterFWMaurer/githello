cmake_minimum_required (VERSION 3.0)

project (GitHello)

include_directories("${PROJECT_SOURCE_DIR}/calc")
add_subdirectory (calc)

add_executable(GitHello
    hellomain.cpp
)

target_link_libraries(GitHello calc)


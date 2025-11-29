# Create a header-only library
add_library(common INTERFACE)

# Collect all subdirectories recursively
file(GLOB_RECURSE COMMON_DIRS
     LIST_DIRECTORIES true
     ${CMAKE_CURRENT_LIST_DIR}/*
)

set(COMMON_INCLUDE_DIRS "")
foreach(dir ${COMMON_DIRS})
    if(IS_DIRECTORY ${dir})
        list(APPEND COMMON_INCLUDE_DIRS ${dir})
    endif()
endforeach()

# Expose all directories as public include dirs
target_include_directories(common INTERFACE ${COMMON_INCLUDE_DIRS})

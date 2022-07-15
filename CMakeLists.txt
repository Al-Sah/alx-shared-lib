cmake_minimum_required(VERSION 3.16)
project(alex_shared_lib)

set(CMAKE_CXX_STANDARD 20)

add_library(start SHARED start.cpp start.h)
add_library(sorting_algorithms SHARED sorting_algorithms.cpp sorting_algorithms.h)
add_library(arrays_processing SHARED arrays_processing.cpp arrays_processing.h)

install(TARGETS start CONFIGURATIONS RUNTIME DESTINATION /usr/local/lib/)
install(TARGETS arrays_processing CONFIGURATIONS RUNTIME DESTINATION /usr/local/lib/)
install(TARGETS sorting_algorithms CONFIGURATIONS RUNTIME DESTINATION /usr/local/lib/)

install(FILES start.h DESTINATION /usr/local/include/alx)
install(FILES arrays_processing.h DESTINATION /usr/local/include/alx)
install(FILES sorting_algorithms.h DESTINATION /usr/local/include/alx)
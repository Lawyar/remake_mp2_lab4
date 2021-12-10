cmake_minimum_required(VERSION 3.16)

project(remake_mp5)

include_directories(inc)

set(SOURCES
        main.cpp
        src/monom.cpp
	src/polinom.cpp
	src/HashTable.cpp
	src/NodeTable.cpp
	src/SortedTable.cpp
	test/test_HashTable.cpp
	test/test_NodeTable.cpp
	test/test_SortedTable.cpp
	)

set(HEADERS
        inc/monom.h
	inc/polinom.h
	inc/Table.h
	inc/HashTable.h
	inc/NodeTable.h
	inc/SortedTable.h
	)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(googletest)

add_executable(main ${SOURCES} ${HEADERS})

target_link_libraries(main gtest_main)

set_target_properties(
        main PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)


add_library(TestLibrary src/test2.cpp src/test.cpp)

target_include_directories(TestLibrary 
	PUBLIC 
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(TestLibrary PROPERTIES UNITY_BUILD ON)

set(UNITY_BUILD_BATCH_SIZE 2)

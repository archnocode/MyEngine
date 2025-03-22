cmake_minimum_required(VERSION 3.12)
 
set(ENGINE_PROJECT_NAME MyEngineCore)
 
add_library(${ENGINE_PROJECT_NAME} STATIC
	src/MyEngineCore/Utils/test.cpp
	include/MyEngineCore/Utils/test.hpp
)

include_directories(include)
 
target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC include)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)
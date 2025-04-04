cmake_minimum_required(VERSION 3.12)
 
set(ENGINE_PROJECT_NAME MyEngineCore)

set(ENGINE_PUBLIC_INCLUDES
	include/MyEngineCore/Application.hpp
	include/MyEngineCore/Log.hpp
)
set(ENGINE_PRIVATE_SOURSES
	src/MyEngineCore/Application.cpp
)
 
add_library(${ENGINE_PROJECT_NAME} STATIC
	${ENGINE_PRIVATE_SOURSES}
	${ENGINE_PUBLIC_INCLUDES}
)

include_directories(include)
 
target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC include)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)

add_subdirectory(../external/spdlog ${CMAKE_CURRENT_BINARY_DIR}/spdlog)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE spdlog)
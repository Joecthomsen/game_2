cmake_minimum_required(VERSION 3.16.3)

project(PICK_UP_BALLS)

add_executable(${PROJECT_NAME} src/main.cpp src/Game.cpp src/Player.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC external/include src)

target_link_directories(${PROJECT_NAME} PUBLIC external/sfml/lib)

target_link_libraries(${PROJECT_NAME} libsfml-audio.so libsfml-graphics.so sfml-system libsfml-window.so)
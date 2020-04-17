cmake_minimum_required(VERSION 2.8)

project(nn)

find_package (OpenCV)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZBar REQUIRED IMPORTED_TARGET zbar)

find_package(nlohmann_json 3.2.0 REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS})

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -openmp -pthread -std=c++14")
set(CMAKE_MODULE_PATH ${ZBARCV_SOURCE_DIRS})

add_executable(
    nn    
    src/main.cpp
    src/Matrix.cpp
    src/NeuralNetwork.cpp
    src/Topology.cpp
    src/CSV.cpp)

target_link_libraries(nn 
    PRIVATE nlohmann_json::nlohmann_json
    ${OpenCV_LIBS}
    PkgConfig::ZBar)




cmake_minimum_required(VERSION 2.8)
find_package(GTest REQUIRED)

set(TARS_INC "/usr/local/tars/cpp/include")
set(TARS_LIB "/usr/local/tars/cpp/lib")
set(TARS_LIB_UTIL "${TARS_LIB}/libtarsutil.a")

set(COUNTER_SRC "${PROJECT_SOURCE_DIR}/src/Counter.cpp")

include_directories(${GTEST_INCLUDE_DIRS}
        ${TARS_INC}
        ${PROJECT_SOURCE_DIR}/src )

link_directories(${TARS_LIB})

add_executable(app_ut ${COUNTER_SRC} app_ut.cpp)

target_link_libraries( app_ut
        /usr/local/tars/cpp/lib/libtarsutil.a
        ${GTEST_BOTH_LIBRARIES}
        pthread )

gtest_discover_tests(app_ut
                     XML_OUTPUT_DIR "${PROJECT_SOURCE_DIR}/build/test_result" )

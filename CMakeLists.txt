cmake_minimum_required(VERSION 3.20)

project(C_TicTacToe LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(C_TicTacToe
    src/main.c
    src/game.c
    src/input_handler.c
    src/output_handler.c
    src/player.c
)

target_include_directories(C_TicTacToe PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
)
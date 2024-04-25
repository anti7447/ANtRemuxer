# About
ANtRemuxer is a program for converting videos from one format to another along with GUI on GTK+
## Disclaimer
This miracle was developed for practice and it is my pet project

**NOTE:** I also note that for all the actions that you perform on your computer according to this (or other) manual, **you** are solely responsible
# Build
## Dependencies
You need to install before compiling:
- gtkmm ([docs](https://gnome.pages.gitlab.gnome.org/gtkmm-documentation/index.html))
- ffmpeg ([docs](https://ffmpeg.org/documentation.html))
## Other programms
You also need to install before compiling:
- git
- gcc
- Ninja
- CMake
## Linux Build
### Main (GUI only, without backend)
Clone the repository and go to it
```sh
~ $ git clone https://github.com/anti7447/ANtRemuxer.git
```
```sh
~ $ cd ./ANtRemuxer/
```
---
Set some compilation values. Replace `/path/to/gcc` and `/path/to/g++` with paths leading to these compilers
```sh
~/ANtRemuxer $ cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=/path/to/gcc -DCMAKE_CXX_COMPILER:FILEPATH=/path/to/g++ -S./ -B./build -G Ninja
```
---
Compile the project
```sh
~/ANtRemuxer $ cmake --build ./build --config Debug --target all --
```
---
Run it
```sh
~/ANtRemuxer $ ./build/Remuxer
```
### Converter (CLI, backend)
```sh
~/ANtRemuxer $ cd ./Converter
```
```sh
~/ANtRemuxer/Converter $ g++ -std=c++11 -O3 Converter.cpp -o remux2 `pkg-config --cflags --libs libavformat libavcodec x264 libswresample libavutil fdk-aac`
```
```sh
~/ANtRemuxer/Converter $ ./remux2 /path/to/movie.mp4 /path/to/movie.mov
```
## Other OS (Windows, MacOS, etc.) Build
Idk
# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build

# Include any dependencies generated for this target.
include CMakeFiles/raytracer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/raytracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/raytracer.dir/flags.make

CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o: ../cameras/Pinhole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/Pinhole.cpp

CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/Pinhole.cpp > CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.i

CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/Pinhole.cpp -o CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.s

CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o: ../cameras/ThinLens.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/ThinLens.cpp

CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/ThinLens.cpp > CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.i

CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/cameras/ThinLens.cpp -o CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.s

CMakeFiles/raytracer.dir/core/Camera.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/Camera.cpp.o: ../core/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/raytracer.dir/core/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/Camera.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Camera.cpp

CMakeFiles/raytracer.dir/core/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Camera.cpp > CMakeFiles/raytracer.dir/core/Camera.cpp.i

CMakeFiles/raytracer.dir/core/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Camera.cpp -o CMakeFiles/raytracer.dir/core/Camera.cpp.s

CMakeFiles/raytracer.dir/core/LightSource.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/LightSource.cpp.o: ../core/LightSource.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/raytracer.dir/core/LightSource.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/LightSource.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/LightSource.cpp

CMakeFiles/raytracer.dir/core/LightSource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/LightSource.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/LightSource.cpp > CMakeFiles/raytracer.dir/core/LightSource.cpp.i

CMakeFiles/raytracer.dir/core/LightSource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/LightSource.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/LightSource.cpp -o CMakeFiles/raytracer.dir/core/LightSource.cpp.s

CMakeFiles/raytracer.dir/core/Material.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/Material.cpp.o: ../core/Material.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/raytracer.dir/core/Material.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/Material.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Material.cpp

CMakeFiles/raytracer.dir/core/Material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/Material.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Material.cpp > CMakeFiles/raytracer.dir/core/Material.cpp.i

CMakeFiles/raytracer.dir/core/Material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/Material.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Material.cpp -o CMakeFiles/raytracer.dir/core/Material.cpp.s

CMakeFiles/raytracer.dir/core/RayTracer.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/RayTracer.cpp.o: ../core/RayTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/raytracer.dir/core/RayTracer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/RayTracer.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/RayTracer.cpp

CMakeFiles/raytracer.dir/core/RayTracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/RayTracer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/RayTracer.cpp > CMakeFiles/raytracer.dir/core/RayTracer.cpp.i

CMakeFiles/raytracer.dir/core/RayTracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/RayTracer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/RayTracer.cpp -o CMakeFiles/raytracer.dir/core/RayTracer.cpp.s

CMakeFiles/raytracer.dir/core/Scene.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/Scene.cpp.o: ../core/Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/raytracer.dir/core/Scene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/Scene.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Scene.cpp

CMakeFiles/raytracer.dir/core/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/Scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Scene.cpp > CMakeFiles/raytracer.dir/core/Scene.cpp.i

CMakeFiles/raytracer.dir/core/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/Scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Scene.cpp -o CMakeFiles/raytracer.dir/core/Scene.cpp.s

CMakeFiles/raytracer.dir/core/Shape.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/core/Shape.cpp.o: ../core/Shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/raytracer.dir/core/Shape.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/core/Shape.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Shape.cpp

CMakeFiles/raytracer.dir/core/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/core/Shape.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Shape.cpp > CMakeFiles/raytracer.dir/core/Shape.cpp.i

CMakeFiles/raytracer.dir/core/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/core/Shape.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/core/Shape.cpp -o CMakeFiles/raytracer.dir/core/Shape.cpp.s

CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o: ../lights/AreaLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/AreaLight.cpp

CMakeFiles/raytracer.dir/lights/AreaLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/lights/AreaLight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/AreaLight.cpp > CMakeFiles/raytracer.dir/lights/AreaLight.cpp.i

CMakeFiles/raytracer.dir/lights/AreaLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/lights/AreaLight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/AreaLight.cpp -o CMakeFiles/raytracer.dir/lights/AreaLight.cpp.s

CMakeFiles/raytracer.dir/lights/PointLight.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/lights/PointLight.cpp.o: ../lights/PointLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/raytracer.dir/lights/PointLight.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/lights/PointLight.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/PointLight.cpp

CMakeFiles/raytracer.dir/lights/PointLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/lights/PointLight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/PointLight.cpp > CMakeFiles/raytracer.dir/lights/PointLight.cpp.i

CMakeFiles/raytracer.dir/lights/PointLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/lights/PointLight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/lights/PointLight.cpp -o CMakeFiles/raytracer.dir/lights/PointLight.cpp.s

CMakeFiles/raytracer.dir/main/main.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/main/main.cpp.o: ../main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/raytracer.dir/main/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/main/main.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/main/main.cpp

CMakeFiles/raytracer.dir/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/main/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/main/main.cpp > CMakeFiles/raytracer.dir/main/main.cpp.i

CMakeFiles/raytracer.dir/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/main/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/main/main.cpp -o CMakeFiles/raytracer.dir/main/main.cpp.s

CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o: ../materials/BlinnPhong.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/materials/BlinnPhong.cpp

CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/materials/BlinnPhong.cpp > CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.i

CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/materials/BlinnPhong.cpp -o CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.s

CMakeFiles/raytracer.dir/shapes/BVH.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/shapes/BVH.cpp.o: ../shapes/BVH.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/raytracer.dir/shapes/BVH.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/shapes/BVH.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/BVH.cpp

CMakeFiles/raytracer.dir/shapes/BVH.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/shapes/BVH.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/BVH.cpp > CMakeFiles/raytracer.dir/shapes/BVH.cpp.i

CMakeFiles/raytracer.dir/shapes/BVH.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/shapes/BVH.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/BVH.cpp -o CMakeFiles/raytracer.dir/shapes/BVH.cpp.s

CMakeFiles/raytracer.dir/shapes/Plane.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/shapes/Plane.cpp.o: ../shapes/Plane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/raytracer.dir/shapes/Plane.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/shapes/Plane.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Plane.cpp

CMakeFiles/raytracer.dir/shapes/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/shapes/Plane.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Plane.cpp > CMakeFiles/raytracer.dir/shapes/Plane.cpp.i

CMakeFiles/raytracer.dir/shapes/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/shapes/Plane.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Plane.cpp -o CMakeFiles/raytracer.dir/shapes/Plane.cpp.s

CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o: ../shapes/Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Sphere.cpp

CMakeFiles/raytracer.dir/shapes/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/shapes/Sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Sphere.cpp > CMakeFiles/raytracer.dir/shapes/Sphere.cpp.i

CMakeFiles/raytracer.dir/shapes/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/shapes/Sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Sphere.cpp -o CMakeFiles/raytracer.dir/shapes/Sphere.cpp.s

CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o: ../shapes/TriMesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/TriMesh.cpp

CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/TriMesh.cpp > CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.i

CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/TriMesh.cpp -o CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.s

CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o: ../shapes/Triangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o -c /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Triangle.cpp

CMakeFiles/raytracer.dir/shapes/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/shapes/Triangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Triangle.cpp > CMakeFiles/raytracer.dir/shapes/Triangle.cpp.i

CMakeFiles/raytracer.dir/shapes/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/shapes/Triangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/shapes/Triangle.cpp -o CMakeFiles/raytracer.dir/shapes/Triangle.cpp.s

# Object files for target raytracer
raytracer_OBJECTS = \
"CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o" \
"CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o" \
"CMakeFiles/raytracer.dir/core/Camera.cpp.o" \
"CMakeFiles/raytracer.dir/core/LightSource.cpp.o" \
"CMakeFiles/raytracer.dir/core/Material.cpp.o" \
"CMakeFiles/raytracer.dir/core/RayTracer.cpp.o" \
"CMakeFiles/raytracer.dir/core/Scene.cpp.o" \
"CMakeFiles/raytracer.dir/core/Shape.cpp.o" \
"CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o" \
"CMakeFiles/raytracer.dir/lights/PointLight.cpp.o" \
"CMakeFiles/raytracer.dir/main/main.cpp.o" \
"CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o" \
"CMakeFiles/raytracer.dir/shapes/BVH.cpp.o" \
"CMakeFiles/raytracer.dir/shapes/Plane.cpp.o" \
"CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o" \
"CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o" \
"CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o"

# External object files for target raytracer
raytracer_EXTERNAL_OBJECTS =

raytracer: CMakeFiles/raytracer.dir/cameras/Pinhole.cpp.o
raytracer: CMakeFiles/raytracer.dir/cameras/ThinLens.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/Camera.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/LightSource.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/Material.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/RayTracer.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/Scene.cpp.o
raytracer: CMakeFiles/raytracer.dir/core/Shape.cpp.o
raytracer: CMakeFiles/raytracer.dir/lights/AreaLight.cpp.o
raytracer: CMakeFiles/raytracer.dir/lights/PointLight.cpp.o
raytracer: CMakeFiles/raytracer.dir/main/main.cpp.o
raytracer: CMakeFiles/raytracer.dir/materials/BlinnPhong.cpp.o
raytracer: CMakeFiles/raytracer.dir/shapes/BVH.cpp.o
raytracer: CMakeFiles/raytracer.dir/shapes/Plane.cpp.o
raytracer: CMakeFiles/raytracer.dir/shapes/Sphere.cpp.o
raytracer: CMakeFiles/raytracer.dir/shapes/TriMesh.cpp.o
raytracer: CMakeFiles/raytracer.dir/shapes/Triangle.cpp.o
raytracer: CMakeFiles/raytracer.dir/build.make
raytracer: CMakeFiles/raytracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable raytracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/raytracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/raytracer.dir/build: raytracer

.PHONY : CMakeFiles/raytracer.dir/build

CMakeFiles/raytracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/raytracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/raytracer.dir/clean

CMakeFiles/raytracer.dir/depend:
	cd /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build /mnt/c/Users/zedro/OneDrive/Documents/oldE/Docs/cg/cw2/raytracer_A2_CG2021/raytracer_A2_CG2021/RayTracer/build/CMakeFiles/raytracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/raytracer.dir/depend


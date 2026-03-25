# vcppake

# Windows

# vcpkg Initialization
```
git submodule update --init --recursive
```
```
.\vcpkg\bootstrap-vcpkg.bat
```

# Build
```
cmake --preset=ninja-vcpkg
```
```
cmake --preset=ninja-vcpkg-debug
```
or
```
cmake --preset=ninja-vcpkg-release
```

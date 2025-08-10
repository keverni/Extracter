# Extracter
Extracter - Educational and just-for-fun project on С++

## Dependencies
* [libzipp](https://github.com/ctabin/libzippp)
* [GTest](https://github.com/google/googletest)

## Build
```shell
vcpkg install libzipp gtest
vcpkg integrate install

cd Extracter
mkdir build && cd build

cmake .. -DCMAKE_TOOLCHAIN_FILE="Path to vcpkg.cmake"
cmake --build .
```

## Usage 
```cpp
#include "ArchiveManager.h"

int main() noexcept
{
	ArchiveManager manager;
	
	manager.SetArhiveType(ArchiveType::Zip);
	manager.ExtractEntries("test_archive.zip");
}
```

## Testing
```shell
ctest
```

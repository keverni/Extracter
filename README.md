# Extracter
Extracter - Educational and just-for-fun project on С++

## Dependencies
* [libzippp](https://github.com/ctabin/libzippp)
* [GTest](https://github.com/google/googletest)

## Build
```shell
vcpkg install libzippp gtest
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
	
	manager.SetArchiveType(ArchiveType::Zip);
	manager.ExtractEntries("test_archive.zip");
}
```

## Testing
```shell
ctest
```

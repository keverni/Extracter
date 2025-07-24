# Extracter
Extracter - Educational and just-for-fun project on С++

## Dependencies
* [libzipp](https://github.com/ctabin/libzippp)

## Build
```shell
vcpkg install libzipp
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

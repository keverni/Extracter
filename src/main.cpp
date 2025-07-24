#include <iostream>
#include "ArchiveManager.h"

int main() noexcept
{
	ArchiveManager manager;
	
	manager.SetArhiveType(ArchiveType::Zip);
	manager.ExtractEntries("test_archive.zip");
}
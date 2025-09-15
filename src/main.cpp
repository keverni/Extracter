#include <iostream>
#include "ArchiveManager.h"

int main() noexcept
{
	try
	{
		ArchiveManager manager;
		manager.SetArchiveType(ArchiveType::Zip);
		manager.ExtractEntries("test_archive.zip");
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}
}
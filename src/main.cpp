
#include <iostream>

#include "ArchiveManager.h"
#include <print>

int main() noexcept
{
	ArchiveManager manager;

	if (auto set_result{ manager.SetArchiveType(ArchiveType::Zip) }; !set_result.has_value())
	{
		std::cout << set_result.error() << std::endl;
	}

	if (auto result{ manager.ExtractEntries("test_archive.zip") }; !result.has_value())
	{
		std::cout << result.error() << std::endl;
	}

	return 0;
}
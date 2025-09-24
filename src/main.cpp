
#include "ArchiveManager.h"
#include <print>

int main() noexcept
{
	ArchiveManager manager;

	auto set_result{ manager.SetArchiveType(ArchiveType::Zip) };
	if (!set_result.has_value())
	{
		std::println(set_result.error());
	}

	auto result{ manager.ExtractEntries("test_archive.zip") };
	if (!result.has_value())
	{
		std::println(result.error());
	}

	return 0;
}
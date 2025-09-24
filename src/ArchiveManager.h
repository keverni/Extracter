#pragma once

#include "Archive.h"
#include <memory>

enum class ArchiveType
{
	Zip = 0,
};

class ArchiveManager final
{
public:
	std::expected<int, std::string> SetArchiveType(ArchiveType type);

	std::expected<int, std::string> ExtractEntries(const std::string& archive_name, const std::string& password = "") const;

private:
	std::unique_ptr<Archive> m_Archive;
};
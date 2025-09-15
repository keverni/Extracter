#pragma once

#include "Archive.h"
#include <memory>
#include <optional>

enum class ArchiveType
{
	Zip = 0,
};

class ArchiveManager final
{
public:
	void SetArchiveType(ArchiveType type);

	void ExtractEntries(const std::string& archive_name, const std::string& password = "") const;

private:
	std::unique_ptr<Archive> m_Archive;
};
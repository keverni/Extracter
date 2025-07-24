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
	void SetArhiveType(ArchiveType type) noexcept;

	void ExtractEntries(const std::string& archive_name, const std::string& password = "") const noexcept;

private:
	std::unique_ptr<Archive> m_Archive;
};
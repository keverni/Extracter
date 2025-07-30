#include "ArchiveManager.h"
#include "ZipArchive.h"

std::optional<int> ArchiveManager::SetArhiveType(ArchiveType type) noexcept
{
	if (type == ArchiveType::Zip)
	{
		m_Archive = std::make_unique<ZipArchive>();
	}
	//
	else
	{
		return std::nullopt;
	}
	return 1;
}

void ArchiveManager::ExtractEntries(const std::string& archive_name, const std::string& password) const noexcept
{
	m_Archive->Extract(archive_name, password);
}

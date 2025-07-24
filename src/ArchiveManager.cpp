#include "ArchiveManager.h"
#include "ZipArchive.h"

void ArchiveManager::SetArhiveType(ArchiveType type) noexcept
{
	if (type == ArchiveType::Zip)
	{
		m_Archive = std::make_unique<ZipArchive>();
	}
	//
}

void ArchiveManager::ExtractEntries(const std::string& archive_name, const std::string& password) const noexcept
{
	m_Archive->Extract(archive_name, password);
}

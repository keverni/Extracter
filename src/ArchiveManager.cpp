#include "ArchiveManager.h"
#include "ZipArchive.h"

std::expected<int, std::string> ArchiveManager::SetArchiveType(ArchiveType type)
{
	if (type == ArchiveType::Zip)
	{
		m_Archive = std::make_unique<ZipArchive>();
	}
	else
	{
		return std::unexpected("Invalid archive type");
	}
	return 0;
}

std::expected<int, std::string> ArchiveManager::ExtractEntries(const std::string& archive_name, const std::string& password) const
{
	return m_Archive->Extract(archive_name, password);
}

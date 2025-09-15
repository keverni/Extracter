#include "ArchiveManager.h"
#include "ZipArchive.h"
#include <stdexcept>

void ArchiveManager::SetArchiveType(ArchiveType type)
{
	if (type == ArchiveType::Zip)
	{
		m_Archive = std::make_unique<ZipArchive>();
	}
	else
	{
		throw std::invalid_argument("Invalid archive type");
	}
}

void ArchiveManager::ExtractEntries(const std::string& archive_name, const std::string& password) const
{
	m_Archive->Extract(archive_name, password);
}

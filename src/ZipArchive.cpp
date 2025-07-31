#include "ZipArchive.h"

#include <filesystem>
#include <fstream>
#include <libzippp.h>
#include <vector>

namespace lz = libzippp;
namespace fs = std::filesystem;

void ZipArchive::Extract(const std::string& archive_name, const std::string& password) const
{
	lz::ZipArchive zip_archive{ archive_name, password};
	if (!zip_archive.open(lz::ZipArchive::ReadOnly))
	{
		throw std::runtime_error("Zip Archive not exists!");
	}

	auto entries{ zip_archive.getEntries() };

	if (entries.size() == 0)
	{
		throw std::runtime_error("Zip Archive is empty!");
	}
	fs::path path_to_file{ archive_name };
	auto path_to_extract_dir{ path_to_file.stem().string() };
	fs::path extract_dir = path_to_file.parent_path() / path_to_extract_dir;

	fs::create_directories(extract_dir);

	for (const auto& entry : entries)
	{
		if (entry.isNull()) continue;

		auto name{ entry.getName() };

		if (name.empty()) continue;

		if (name.back() == '/')
		{
			fs::create_directories(extract_dir.string() + "/" + name);
			continue;
		}

		auto content{ entry.readAsText() };

		auto full_path{ extract_dir.string() + "/" + name };

		std::ofstream file(full_path, std::ios::binary);

		file << content;
		file.close();
	}

	zip_archive.close();
}

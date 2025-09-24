#pragma once

#include "Archive.h"

class ZipArchive final : public Archive
{
public:
	virtual ~ZipArchive() noexcept override = default;

	std::expected<int, std::string> Extract(const std::string& archive_name, const std::string& password = "") const override;
};
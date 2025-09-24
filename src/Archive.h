#pragma once

#include <string>
#include <expected>

class Archive
{
public:
	virtual ~Archive() noexcept = default;

	virtual std::expected<int, std::string> Extract(const std::string& archive_name, const std::string& password = "") const = 0;
};
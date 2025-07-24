#pragma once

#include <string>

class Archive
{
public:
	virtual ~Archive() noexcept = default;

	virtual void Extract(const std::string& archive_name, const std::string& password = "") const noexcept = 0;
};
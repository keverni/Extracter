#pragma once

#include <gtest/gtest.h>
#include "ArchiveManager.h"

TEST(TestArchiveManager, SetValidType)
{
	ArchiveManager manager;

	auto set_result{ manager.SetArchiveType(ArchiveType::Zip) };

	ASSERT_TRUE(set_result.has_value());
}

TEST(TestArchiveManager, SetInvalidType)
{
	ArchiveManager manager;

	auto set_result{ manager.SetArchiveType(static_cast<ArchiveType>(10)) };

	ASSERT_FALSE(set_result.has_value());
}

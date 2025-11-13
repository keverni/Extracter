#pragma once

#include <gtest/gtest.h>
#include "ArchiveManager.h"

TEST(TestArchiveManager, SetValidType)
{
	ArchiveManager manager;

	ASSERT_NO_THROW(manager.SetArchiveType(ArchiveType::Zip));
}

TEST(TestArchiveManager, SetInvalidType)
{
	ArchiveManager manager;

	ASSERT_THROW(manager.SetArchiveType(static_cast<ArchiveType>(10)), std::invalid_argument);
}

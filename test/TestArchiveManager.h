#pragma once

#include <gtest/gtest.h>
#include <ArchiveManager.h>


TEST(TestArchiveManager, SetType)
{
	ArchiveManager manager;

	auto result{ manager.SetArhiveType(ArchiveType::Zip) };

	ASSERT_EQ(result.value(), 1);
}
#pragma once

#include <gtest/gtest.h>
#include "ZipArchive.h"

TEST(TestZipArchive, Extract)
{
	// Arrange
	const ZipArchive archive;

	auto result{ archive.Extract("test_archive.zip") };

	// Assert
	ASSERT_FALSE(result.has_value());
}
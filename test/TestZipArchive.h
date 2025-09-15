#pragma once

#include <gtest/gtest.h>
#include "ZipArchive.h"

TEST(TestZipArchive, Extract)
{
	// Arrange
	const ZipArchive archive;

	// Assert
	ASSERT_THROW(archive.Extract("test_archive.zip"), std::runtime_error);
}
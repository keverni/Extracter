#pragma once

#include <gtest/gtest.h>
#include <ZipArchive.h>

TEST(TestZipArchive, Extract)
{
	// Arrange
	ZipArchive archive;

	// Assert
	ASSERT_THROW(archive.Extract("test_archive.zip"), std::exception);
}
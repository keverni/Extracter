#pragma once

#include <gtest/gtest.h>
#include "ZipArchive.h"

TEST(TestZipArchive, Extract)
{
	const ZipArchive archive;

	ASSERT_THROW(archive.Extract("test_archive.zip"), std::runtime_error);
}
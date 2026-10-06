/*
 * Base_test.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Alons
 */

#include "gtest/gtest.h"
#include "Base.h"

TEST(BASE, constructor){
	Base a;
	Base b(1);
	Base c(b);

	int va,vb;
	a.get(va,vb);
	ASSERT_EQ(va,0);
	ASSERT_EQ(vb,0);

	b.get(va,vb);
	ASSERT_EQ(va,1);
	ASSERT_EQ(vb,0);

	c.get(va,vb);
	ASSERT_EQ(va,1);
	ASSERT_EQ(vb,0);

}



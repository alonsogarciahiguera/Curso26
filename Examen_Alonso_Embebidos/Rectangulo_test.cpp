/*
 * Rectangulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Alons
 */



#include "Rectangulo.h"
#include <gtest/gtest.h>

TEST(Rectangulo, test1) {
	Rectangulo r(3, 4);

	ASSERT_FLOAT_EQ(r.area(), 12.0f);
	ASSERT_FLOAT_EQ(r.perimetro(), 14.0f);
}

TEST(Rectangulo, test2) {
	Rectangulo rect(2.5, 4);
	Sharpe *psharpe;
	psharpe = &rect;

	ASSERT_FLOAT_EQ(psharpe->area(), 10.0f);
	ASSERT_FLOAT_EQ(psharpe->perimetro(), 13.0f);
}

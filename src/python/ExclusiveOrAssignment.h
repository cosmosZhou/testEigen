#pragma once
#include "BinaryOperator.h"
struct ExclusiveOrAssignment : BinaryOperator
{
	__declare_common_interface(10, 0);

    string toString()
    {
        return "$this->lhs ^= $this->rhs";
    }
}
;

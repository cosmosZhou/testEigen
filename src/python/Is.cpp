#pragma once

struct Is : BinaryOperator
{

    static function input_precedence()
    {
        return 0;
    }

    static function stack_precedence()
    {
        return 0;
    }

    string toString()
    {
        return "$this->lhs is $this->rhs";
    }
}
;

// as in the form: i for i in (1, 2, 3) if i
#pragma once

struct GeneratorIf : Generator
{
	__declare_common_interface(0, 0);

    protected $cond;

    function __construct($expr, $var, $domain, $cond, $parent)
    {
        parent::__construct($expr, $var, $domain, $parent);
        $this->cond = $cond;

        $cond->parent = $this;
    }

    function replace($old, $new)
    {
        if ($old === $this->cond) {
            $this->cond = $new;
        } else {
            parent::replace($old, $new);
        }
    }

    string toString()
    {
        return parent::toString() . " if $this->cond";
    }
}
;

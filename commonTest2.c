/* source module: commonTest3.c */

#include <stdint.h>

uint32_t test2_var = 0;

uint32_t commonTest2Func (void)
{
    test2_var = 42;

    return (test2_var);    
}

uint32_t commonTest2Func2 (void)
{
    test2_var = 43 * 2;

    return (test2_var);        
}

uint32_t commonTest2Func3 (void)
{
    test2_var = 44 * 17;

    return (test2_var);        
}


uint32_t commonTest2Func4 (void)
{
    test2_var = 45 * 54;

    return (test2_var);    
}


uint32_t commonTest2Func5 (uint32_t initial_value_u32)
{
    test2_var = 48 + initial_value_u32;

    return (test2_var);    
}
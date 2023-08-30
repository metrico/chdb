#pragma once
#include <cstdint>
#include <stddef.h>
#include "query_result.h"

extern "C" {
struct local_result
{
    query_result_* result_;
};

local_result * query_stable(int argc, char ** argv);
void free_result(local_result * result);
}

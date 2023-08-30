#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <memory>

class query_result_
{
public:
    explicit query_result_(std::vector<char>* buf, uint64_t rows,
                           uint64_t bytes, double elapsed):
        buf_(buf), rows_(rows), bytes_(bytes),
        elapsed_(elapsed) { }

    explicit query_result_(std::string&& error_msg): error_msg_(error_msg) { }

    std::string string()
    {
        return std::string(buf_->begin(), buf_->end());
    }

    std::shared_ptr<std::vector<char>> buf_;
    uint64_t rows_;
    uint64_t bytes_;
    double elapsed_;
    std::string error_msg_;
};

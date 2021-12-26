// Copyright 2021 Lasar1k <alf.ivan2002@gmail.com>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <stdint.h>
#include <any>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "uchenik.hpp"

#define STUDENT_PAIR std::vector<uchenik>, std::string

using json = nlohmann::json;

std::string get_name(json* stt);

std::any get_group(json* stt);

std::any get_avg(json* stt);

std::any get_debt(json* stt);

std::pair<STUDENT_PAIR> parse_json(const json & jf);

Lengths get_lengths(std::vector<uchenik> students);

bool output(const std::vector<uchenik>& students, std::ostream& os);

#endif  // INCLUDE_HEADER_HPP_

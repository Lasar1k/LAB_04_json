// Copyright 2021 Lasar1k <alf.ivan2002@gmail.com>

#ifndef INCLUDE_UCHENIK_HPP_
#define INCLUDE_UCHENIK_HPP_

#endif  // INCLUDE_UCHENIK_HPP_

#include <string>
#include "header.hpp"

struct uchenik : public std::_Resetiosflags {
  std::string name;
  std::any group;
  std::any avg;
  std::any debt;
};

struct Lengths {
  int name;
  int group;
  int avg;
  int debt;
};

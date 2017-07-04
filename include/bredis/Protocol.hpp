//
//
// Copyright (c) 2017 Ivan Baidakou (basiliscos) (the dot dmol at gmail dot com)
//
// Distributed under the MIT Software License
//
#pragma once

#include <boost/asio/buffers_iterator.hpp>
#include <ostream>
#include <string>

#include "Command.hpp"
#include "Result.hpp"

namespace bredis {

class Protocol {
  public:
    template <typename Iterator, typename Policy = parsing_policy::keep_result>
    static inline auto parse(Iterator &from, Iterator &to) noexcept
        -> parse_result_t<Iterator, Policy>;

    static inline std::ostream &serialize(std::ostream &buff,
                                          const single_command_t &cmd);
};
};

#include "impl/protocol.ipp"

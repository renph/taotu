/**
 * @file reactor.h
 * @author Sigma711 (sigma711 at foxmail dot com)
 * @brief  // TODO:
 * @date 2021-12-16
 *
 * @copyright Copyright (c) 2021 Sigma711
 *
 */

#ifndef TAOTU_TAOTU_REACTOR_H_
#define TAOTU_TAOTU_REACTOR_H_

#include "acceptor.h"
#include "non_copyable_movable.h"

namespace taotu {

/**
 * @brief  // TODO:
 *
 */
class Reactor : NonCopyableMovable {
 public:
  Reactor();
  ~Reactor();

 private:
  Acceptor acceptor_;
};

}  // namespace taotu

#endif  // !TAOTU_TAOTU_REACTOR_H_

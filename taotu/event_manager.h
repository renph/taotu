/**
 * @file eventer.h
 * @author Sigma711 (sigma711 at foxmail dot com)
 * @brief  // TODO:
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021 Sigma711
 *
 */

#ifndef TAOTU_TAOTU_EVENTER_H_
#define TAOTU_TAOTU_EVENTER_H_

#include "non_copyable_movable.h"

namespace taotu {

class Filer;

class Eventer : NonCopyableMovable {
 public:
  void RemoveFiler(Filer *Socketer);
  void UpdateFiler(Filer *Socketer);
};

}  // namespace taotu

#endif  // !TAOTU_TAOTU_EVENTER_H_
/**
 * @file connectioner.cc
 * @author Sigma711 (sigma711 at foxmail dot com)
 * @brief  // TODO:
 * @date 2021-12-27
 *
 * @copyright Copyright (c) 2021 Sigma711
 *
 */

#include "connectioner.h"

using namespace taotu;

Connectioner::Connectioner(Poller* poller, int socket_fd,
                           const SocketAddress& local_address,
                           const SocketAddress& peer_address)
    : socketer_(socket_fd),
      eventer_(poller, socket_fd),
      local_address_(local_address),
      peer_address_(peer_address) {
  socketer_.SetKeepAlive(true);
}
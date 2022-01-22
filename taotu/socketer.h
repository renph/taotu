/**
 * @file socketer.h
 * @author Sigma711 (sigma711 at foxmail dot com)
 * @brief Declaration of class "Socketer" which is the encapsulation of socket
 * file descriptor.
 * @date 2021-12-08
 *
 * @copyright Copyright (c) 2021 Sigma711
 *
 */

#ifndef TAOTU_TAOTU_SOCKETER_H_
#define TAOTU_TAOTU_SOCKETER_H_

#include "net_address.h"
#include "non_copyable_movable.h"

namespace taotu {

/**
 * @brief "Socketer" provides the ability of creating new connection and setting
 * a few of its socket options.
 *
 */
class Socketer : NonCopyableMovable {
 public:
  Socketer(int socket_fd);
  ~Socketer();

  // Get the file descriptor
  int Fd() const;

  // Bind local net address info (IP address, port and so on)
  void BindAddress(const NetAddress& local_address);

  // Listen to the port of the IP address
  void Listen();

  // Accept a connection, allocate a corresponding file descriptor and record
  // its net address info
  int Accept(NetAddress* peer_address);

  // Shut down writing-end(self)
  void ShutdownWrite();

  void SetTcpNoDelay(bool on);
  void SetReuseAddress(bool on);
  void SetReusePort(bool on);
  void SetKeepAlive(bool on);

 private:
  // The file descriptor
  const int socket_fd_;
};

}  // namespace taotu

#endif  // !TAOTU_TAOTU_SOCKETER_H_

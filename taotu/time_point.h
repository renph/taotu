/**
 * @file time_point.h
 * @author Sigma711 (sigma711 at foxmail dot com)
 * @brief  // TODO:
 * @date 2021-12-06
 *
 * @copyright Copyright (c) 2021 Sigma711
 *
 */

#ifndef TAOTU_TAOTU_TIME_POINT_H_
#define TAOTU_TAOTU_TIME_POINT_H_

#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>

#include <functional>

namespace taotu {

/**
 * @brief  // TODO:
 *
 */
class TimePoint {
 public:
  TimePoint();
  TimePoint(int64_t duration_micro_seconds, bool repeated);
  int64_t TimePointMicroSeconds() const;
  bool ShouldRepeat() const { return context_ != 0; }
  int64_t Context() const { return context_; }

  int GetMillisecond() const;

  bool operator<(const TimePoint& tp) const {
    return time_point_micro_seconds_ < tp.time_point_micro_seconds_;
  }
  bool operator<=(const TimePoint& tp) const {
    return time_point_micro_seconds_ <= tp.time_point_micro_seconds_;
  }
  bool operator==(const TimePoint& tp) const {
    return time_point_micro_seconds_ == tp.time_point_micro_seconds_;
  }

  void SetTaskContinueCallback(std::function<bool()> IsContinue);
  std::function<bool()> GetTaskContinueCallback() const;

 private:
  static int64_t FNow();

  int64_t time_point_micro_seconds_;
  int64_t context_;

  std::function<bool()> IsContinue_;
};

}  // namespace taotu

#endif  // !TAOTU_TAOTU_TIME_POINT_H_

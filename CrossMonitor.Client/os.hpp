#pragma once

#include "../CrossMonitor.Shared/os.hpp"

namespace crossover {
namespace monitor {
namespace client {
namespace os {

/**
 * Gets the number of currently running processes.
 */
unsigned process_count() noexcept;
/**
 * Gets CPU use percentage (0 to 100).
 */
int cpu_use_percent() noexcept;
/**
 * Gets physical memory use percentage (0 to 100).
 */
int memory_use_percent() noexcept;
/**
* Gets io usage.
*/
int io_use_percent() noexcept;

} //namespace os
} //namespace client
} //namespace monitor
} //namespace crossover

#include <os.hpp>

namespace crossover {
namespace monitor {
namespace client {
namespace os {

// Mock values
unsigned int _process_count = 0;
int _cpu_use_percent = 0;
int _memory_use_percent = 0;
int _io_use_percent = 0;

void set_process_count(unsigned int n) {
	_process_count = n;
}

unsigned process_count() noexcept {
	return _process_count;
}

void set_cpu_use_percent(int percent) {
	_cpu_use_percent = percent;
}

int cpu_use_percent() noexcept {
	return _cpu_use_percent;
}

void set_memory_use_percent(int percent) {
	_memory_use_percent = percent;
}

int memory_use_percent() noexcept {
	return _memory_use_percent;
}

void set_io_use_percent(int percent) {
	_io_use_percent = percent;
}

int io_use_percent() noexcept {
	return _io_use_percent;
}

} //namespace os
} //namespace client
} //namespace monitor
} //namespace crossover


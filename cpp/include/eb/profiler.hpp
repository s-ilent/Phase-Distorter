#pragma once

// Instrumentation hooks: the real Tracy client with EB_ENABLE_TRACY, no-ops
// otherwise. Keep call sites within this surface; a missing stub fails the
// disabled build at compile time.
#ifdef EB_TRACY
#include <tracy/Tracy.hpp>
// Tracy has no thread-name macro; tracy::SetThreadName is its documented API.
#define EB_TRACY_THREAD_NAME(name) tracy::SetThreadName(name)
#else
#define ZoneScoped ((void)0)
#define ZoneScopedN(name) ((void)0)
#define FrameMark ((void)0)
#define TracyPlot(name, value) ((void)0)
#define EB_TRACY_THREAD_NAME(name) ((void)0)
#endif

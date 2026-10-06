# Tracy Profiler provenance

Unmodified standalone Tracy Profiler client v0.14.1, upstream commit
`30997d5ca6bb632cc10807a1da8a6d3de0aeeb3c`:
https://github.com/wolfpld/tracy/tree/30997d5ca6bb632cc10807a1da8a6d3de0aeeb3c

Only the `public/` client tree is included: `TracyClient.cpp`, `client/`,
`common/`, `libbacktrace/` and the `tracy/` user headers. The Fortran binding,
the server/GUI (profiler standalone), manual and examples are not included.
`libbacktrace` is required because this project builds on glibc/Linux, where the
client compiles it for callstack support. The 3-clause BSD license is
reproduced in LICENSE.txt. SHA256SUMS records the upstream bytes.

The client is compiled only when CMake option `EB_ENABLE_TRACY` is selected;
instrumentation call sites expand to no-ops otherwise. Connect with the Tracy
profiler GUI from https://github.com/wolfpld/tracy/releases (the client listens
on 127.0.0.1:8086).

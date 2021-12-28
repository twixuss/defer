#pragma once
template <class Fn>
struct Defer {
    Fn fn;
    inline ~Defer() { fn(); }
};

template <class Fn>
inline constexpr Defer<Fn> make_defer(Fn fn) { return {fn}; }

#define defer_concat_(a, b) a ## b
#define defer_concat(a, b) defer_concat_(a, b)

#define defer(...) \
auto defer_concat(_d, __LINE__) = make_defer([&](){__VA_ARGS__;})

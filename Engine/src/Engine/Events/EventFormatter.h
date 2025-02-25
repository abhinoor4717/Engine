#include <spdlog/fmt/bundled/format.h>
#include "Engine/Events/Event.h"

template<>
struct fmt::formatter<Engine::Event> {
    constexpr auto parse(format_parse_context& ctx) -> decltype(ctx.begin()) {
        return ctx.end();
    }

    template <typename FormatContext>
    auto format(const Engine::Event& e, FormatContext& ctx) const -> decltype(ctx.out()) {
        return format_to(ctx.out(), e.ToString());
    }
};
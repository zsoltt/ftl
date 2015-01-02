#ifndef FTL_CONFIG_H
#define FTL_CONFIG_H

#ifdef _WIN32
#define constexpr const
#define constexpr_operator
#define noexcept_operator
#define noexcept(x)
#else
#define constexpr_operator constexpr
#endif

#endif
#ifndef FTL_CONFIG_H
#define FTL_CONFIG_H

#ifdef _WIN32
#define constexpr_auto
#else
#define constexpr_auto constexpr
#endif

#endif
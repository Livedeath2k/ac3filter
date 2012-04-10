#ifndef AC3FILTER_VER

#define AC3FILTER_VER_MAJOR 2
#define AC3FILTER_VER_MINOR 0
#define AC3FILTER_VER_STATE "a"

// Text representation of the version
#define AC3FILTER_VER_QUOTE(x) #x
#define AC3FILTER_VER_(major, minor, state) \
  AC3FILTER_VER_QUOTE(major) "." \
  AC3FILTER_VER_QUOTE(minor) \
  AC3FILTER_VER_STATE
#define AC3FILTER_VER AC3FILTER_VER_(AC3FILTER_VER_MAJOR, AC3FILTER_VER_MINOR, AC3FILTER_VER_STATE)

#endif

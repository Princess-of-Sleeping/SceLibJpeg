/* libjpeg-turbo build number */
#define BUILD  "0"

/* Compiler's inline keyword */
#undef inline

/* How to obtain function inlining. */
#define INLINE inline

/* How to obtain thread-local storage */
#define THREAD_LOCAL

/* Define to the full name of this package. */
#define PACKAGE_NAME  "SceLibJpeg"

/* Version number of package */
#define VERSION  "2.1.5.1"

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T  4

/* Define if your compiler has __builtin_ctzl() and sizeof(unsigned long) == sizeof(size_t). */
#define HAVE_BUILTIN_CTZL

/* Define to 1 if you have the <intrin.h> header file. */
// #define HAVE_INTRIN_H

#if defined(_MSC_VER) && defined(HAVE_INTRIN_H)
#if (SIZEOF_SIZE_T == 8)
#define HAVE_BITSCANFORWARD64
#elif (SIZEOF_SIZE_T == 4)
#define HAVE_BITSCANFORWARD
#endif
#endif

#if defined(__has_attribute)
#if __has_attribute(fallthrough)
#define FALLTHROUGH  __attribute__((fallthrough));
#else
#define FALLTHROUGH
#endif
#else
#define FALLTHROUGH
#endif

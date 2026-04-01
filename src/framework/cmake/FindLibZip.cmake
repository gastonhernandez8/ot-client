find_path(LIBZIP_INCLUDE_DIR_ZIP zip.h)
find_path(LIBZIP_INCLUDE_DIR_ZIPCONF zipconf.h PATHS /usr/include/x86_64-linux-gnu /usr/lib/x86_64-linux-gnu/libzip/include)
find_library(LIBZIP_LIBRARY NAMES zip libzip)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(LibZip DEFAULT_MSG LIBZIP_LIBRARY LIBZIP_INCLUDE_DIR_ZIP LIBZIP_INCLUDE_DIR_ZIPCONF)

set(LIBZIP_LIBRARIES ${LIBZIP_LIBRARY})
set(LIBZIP_INCLUDE_DIRS ${LIBZIP_INCLUDE_DIR_ZIP} ${LIBZIP_INCLUDE_DIR_ZIPCONF})

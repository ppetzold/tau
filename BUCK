include_defs('//BUCKAROO_DEPS')

cxx_library(
  name = 'libtml',
  header_namespace = 'libtml',
  srcs = glob([
    'src/libtml/**/*.cpp',
  ]),
  deps = BUCKAROO_DEPS,
  visibility = ['PUBLIC']
)

cxx_binary(
  name = 'main',
  srcs = ['src/tau/main.cpp'],
  deps = [':libtml'],
  visibility = ['PUBLIC']
)

cxx_binary(
  name = 'test',
  srcs = ['test/main.cpp'],
  deps = BUCKAROO_DEPS,
  visibility = ['PUBLIC']
)

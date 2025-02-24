#include <cstring>
#include <filesystem>
#include <string>

#ifdef DEBUGMSG
template <typename... A> void debug_print(const char *msg, A... args) {
    printf(msg, args...);
}
#endif

bool nameEndWithAsmExtension(std::string_view name);
std::string cleanPathTrail(std::string path);
void set_paths_relative_to(std::string &path, const char *arg0);
// combines the path of src and file
// if src is a file itself, it will backtrace to the containing directory
// if src is a direcotry, it needs to have a trailing /
std::string append_to_dir(std::string_view src, std::string_view file);
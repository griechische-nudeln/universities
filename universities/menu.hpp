
namespace hlr {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}
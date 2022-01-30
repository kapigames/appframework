#include "appframework.hpp"



class sandbox : public app {
public:
    sandbox(args_t args_f) {
        args = args_f; // save args so they can be used by get_arg() and find_arg()
        std::cout << get_executable_path() << "\n";
        std::cout << get_executable_name() << "\n";
    }

    void run() {

    }

    ~sandbox() {
    }


private:

};



int main(int argc, char const *argv[]) {
    app* app = new sandbox(create_args(argc, argv));
    app->run();
    delete app;
    return 0;
}

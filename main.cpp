#include "AppManager.h"

int main(int argc, char *argv[])
{
    try
    {
        AppManager app(argc,argv);
    }
    catch (std::exception &ex)
    {
        std::cout<<"Error:"<<std::endl;
        std::cout<<ex.what()<<std::endl;
    }
    return 0;
}

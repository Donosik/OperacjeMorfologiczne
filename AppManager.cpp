#include "AppManager.h"


AppManager::AppManager(int argc, char **argv) : inputImage(), saveImage()
{
    Arguments(argc, argv);
    Run();
}

void AppManager::Run()
{
    inputImage.SetFile(fileToInput);
    saveImage.SetFile(fileToSave);
    array = inputImage.LoadFromFile();
    ImageProcesser imageProcesser(array);
    array=imageProcesser.GetArray();
    saveImage.SaveToFile(array);
}

void AppManager::Arguments(int argc, char **argv)
{
    if (argc < 5)
    {
        HelpInfo();
    }
    else
    {
        int x = 0;
        for (int i = 1; i < argc; i += 2)
        {
            if ((std::string) argv[i] == "-i")
            {
                x++;
                fileToInput = argv[i + 1];
                continue;
            }
            if ((std::string) argv[i] == "-o")
            {
                x++;
                fileToSave = argv[i + 1];
                continue;
            }
        }
        if (x != 2)
        {
            HelpInfo();
        }
    }
}

void AppManager::HelpInfo()
{
    std::cout << "Instrukcja uzywania programu:" << std::endl;
    std::cout << "Przelacznik -i, a po nim plik z obrazem do wczytania" << std::endl;
    std::cout << "Przelacznik -o, a po nim plik do zapisania" << std::endl;
    throw std::exception("Not enough arguments");
}
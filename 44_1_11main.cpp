#include "os_file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

int main()
{
    file_manager_t fm;
    setup_file_manager(&fm);

    fm.create(1000);
    fm.create_file("file1.txt", 1000);
    fm.create_file("file2.txt", 1);
    int a = fm.remove("file1.txt", 0);
    a = fm.remove("file1.txt", 0);
    cout << a << endl;
    _CrtDumpMemoryLeaks();

    return 0;
}
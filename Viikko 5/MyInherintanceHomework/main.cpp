#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI * paaobjekti = new MyDeviceUI();
    delete paaobjekti;
    paaobjekti = nullptr;
    return 0;
}

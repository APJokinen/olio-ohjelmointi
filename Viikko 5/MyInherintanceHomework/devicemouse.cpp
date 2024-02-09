#include "devicemouse.h"
#include "iostream"

using namespace std;
DeviceMouse::DeviceMouse()
{
    deviceID=0;
    primaryButton=0;
}

short DeviceMouse::getPrimaryButton() const
{
    return primaryButton;
}

void DeviceMouse::setPrimaryButton()
{

    cin >> primaryButton;

}

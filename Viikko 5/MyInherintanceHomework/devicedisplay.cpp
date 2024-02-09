#include "devicedisplay.h"
#include "iostream"

using namespace std;
short DeviceDisplay::getDisplayResolution() const
{

    return displayResolution;
}

void DeviceDisplay::setDisplayResolution()
{

    cin >> displayResolution;

}

DeviceDisplay::DeviceDisplay()
{
    deviceID=0;
    displayResolution=0;
}

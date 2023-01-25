#include "Volume.h"

Volume::Volume()
    :volumeValue(defaultVolume)
{

}
Volume::Volume(int aVolumeValue)
{
    try {
        if (aVolumeValue >= 0 && aVolumeValue <= 100) {
            volumeValue = aVolumeValue;
        } else {
            throw std::invalid_argument("Volume level must be between 0-100. Default volume value set");
        }
    } catch (std::invalid_argument &ia) {
        std::cerr << "Invalid argument: " << ia.what() << '\n';
        volumeValue = defaultVolume;
    }
}
int Volume::getValue() const
{
    return volumeValue;
}
void Volume::setValue(int aVolumeValue)
{
    try {
        if (aVolumeValue >= 0 && aVolumeValue <= 100) {
            volumeValue = aVolumeValue;
        } else {
            throw std::invalid_argument("Volume level must be between 0-100. Default volume value set");
        }
    } catch (std::invalid_argument &ia) {
        std::cerr << "std_invalid_argument: " << ia.what() << '\n';
        volumeValue = defaultVolume;
    }
}
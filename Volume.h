#pragma once

#include<iostream>
#include <stdexcept>
#include <string>
//using std::string;

class Volume {
    public:
        static const int defaultVolume = 20;
        // Constructors
        Volume();
        Volume(int aVolumeValue);
        // Getters and Setters.
        int getValue() const;
        void setValue(int aValue);
    private:
        int volumeValue;
        bool isClamping = true;
};
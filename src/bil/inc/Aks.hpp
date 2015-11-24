#ifndef AKS_HPP
#define AKS_HPP

#include <Data.hpp>
#include <Steering.hpp>
#include <Settings.hpp>


class Aks{
public:
    Aks(Data*, Settings*);
    void start(void);

private:
    Data* MyData;
    Settings* MySettings;
    Steering MySteering;
};


#endif
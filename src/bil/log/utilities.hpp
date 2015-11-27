#ifndef _INCL_UTILITIES_HPP
#define _INCL_UTILITIES_HPP
#include <pthread.h>

// Scoped locker anvendes i dataklassen til at forhindre flere tråde i at skrive i dataen på samme tid
class ScopedLocker{
public:
    ScopedLocker(pthread_mutex_t* theLock){
        this->SL = theLock;
        pthread_mutex_lock(SL);
    }
    
    ~ScopedLocker(){
        pthread_mutex_unlock(SL);
    }
private:
    pthread_mutex_t* SL;
};

// Denne struct anvendes til at håndtere brugerens input.
struct UserInput {
    char forward = 0;
    char reverse = 0;
    char turn = 0;
    char stop = 0;
};

#endif
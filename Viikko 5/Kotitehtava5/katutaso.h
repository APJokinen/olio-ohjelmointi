#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"
#include "asunto.h"

class Katutaso: public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double) override;
private:
    Asunto * as1;
    Asunto * as2;

};

#endif // KATUTASO_H

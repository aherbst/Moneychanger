#ifndef ESCROWPOOL_H
#define ESCROWPOOL_H

#include <tr1/memory>
#include <QList>
#include <QString>
//#include "sampleescrowserver.h"

class SampleEscrowServer;
#ifndef OT_USE_TR1
    typedef std::shared_ptr<SampleEscrowServer> SampleEscrowServerPtr;
#else
    typedef std::tr1::shared_ptr<SampleEscrowServer> SampleEscrowServerPtr;
#endif // OT_USE_TR1

class EscrowPool
{
public:
    EscrowPool();

    // add server to pool
    void AddEscrowServer(SampleEscrowServerPtr server);

    void RemoveEscrowServer(SampleEscrowServerPtr server);

    QList<SampleEscrowServerPtr> escrowServers;     // servers that are part of this pool

    QString poolName;

private:

};

#ifndef OT_USE_TR1
    typedef std::shared_ptr<EscrowPool> EscrowPoolPtr;
#else
    typedef std::tr1::shared_ptr<EscrowPool> EscrowPoolPtr;
#endif // OT_USE_TR1

#endif // ESCROWPOOL_H

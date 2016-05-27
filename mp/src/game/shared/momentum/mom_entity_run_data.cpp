#include "cbase.h"
#include "mom_entity_run_data.h"

#include "tier0/memdbgon.h"


#ifdef GAME_DLL
BEGIN_SEND_TABLE_NOBASE(CMOMRunEntityData, DT_MOM_RunEntData)
SendPropBool(SENDINFO(m_bAutoBhop)),
SendPropInt(SENDINFO(m_iSuccessiveBhops)),
SendPropFloat(SENDINFO(m_flStrafeSync)),
SendPropFloat(SENDINFO(m_flStrafeSync2)),
SendPropFloat(SENDINFO(m_flLastJumpVel)),
SendPropFloat(SENDINFO(m_flLastJumpTime)),
SendPropInt(SENDINFO(m_iRunFlags)),
SendPropBool(SENDINFO(m_bIsInZone)),
SendPropInt(SENDINFO(m_iCurrentZone)),
SendPropBool(SENDINFO(m_bMapFinished)),
END_SEND_TABLE()

#elif defined CLIENT_DLL
BEGIN_RECV_TABLE_NOBASE(C_MOMRunEntityData, DT_MOM_RunEntData)
RecvPropBool(RECVINFO(m_bAutoBhop)),
RecvPropInt(RECVINFO(m_iSuccessiveBhops)),
RecvPropFloat(RECVINFO(m_flStrafeSync)),
RecvPropFloat(RECVINFO(m_flStrafeSync2)),
RecvPropFloat(RECVINFO(m_flLastJumpVel)),
RecvPropFloat(RECVINFO(m_flLastJumpTime)),
RecvPropInt(RECVINFO(m_iRunFlags)),
RecvPropBool(RECVINFO(m_bIsInZone)),
RecvPropInt(RECVINFO(m_iCurrentZone)),
RecvPropBool(RECVINFO(m_bMapFinished)),
END_RECV_TABLE()
#endif

CMOMRunEntityData::CMOMRunEntityData()
{
    m_bAutoBhop = false;
    m_iSuccessiveBhops = 0;
    m_flStrafeSync = 0.0f;
    m_flStrafeSync2 = 0.0f;
    m_flLastJumpVel = 0.0f;
    m_flLastJumpTime = 0.0f;
    m_iRunFlags = 0;
    m_bIsInZone = false;
    m_iCurrentZone = 0;
    m_bMapFinished = false;
}
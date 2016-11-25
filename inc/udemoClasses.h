/*===========================================================================
    C++ class definitions exported from UnrealScript.
    This is automatically generated by the tools.
    DO NOT modify this manually! Edit the corresponding .uc files instead!
===========================================================================*/
#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef UDEMO_API
#define UDEMO_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern UDEMO_API FName UDEMO_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(PackageRequired)
AUTOGENERATE_NAME(DemoReadDone)
AUTOGENERATE_NAME(LinkToPlayer)
AUTOGENERATE_NAME(NetPacketReceived)

#ifndef NAMES_ONLY


class UDEMO_API UUZHandler : public UObject
{
public:
    INT UzAr;
    INT UzDeCompAr;
    FStringNoInit Filename;
    FGuid FileGUID;
    INT FileGen;
    DECLARE_FUNCTION(execForceSave);
    DECLARE_FUNCTION(execSaveFile);
    DECLARE_FUNCTION(execAppend);
    DECLARE_CLASS(UUZHandler,UObject,0,udemo)
    NO_DEFAULT_CONSTRUCTOR(UUZHandler)
};


struct Uudnative_eventDemoReadDone_Parms
{
    FString Map;
    BITFIELD bServerDemo;
    FLOAT Time;
    INT NumFrames;
};
struct Uudnative_eventPackageRequired_Parms
{
    FString Package;
    INT Size;
    BITFIELD Installed;
    FGuid myGUID;
    INT gen;
    BITFIELD Cached;
};
class UDEMO_API Uudnative : public UObject
{
public:
    class UDemoRecDriver* DemoDriver;
    FStringNoInit DemoURL;
    DECLARE_FUNCTION(execDispatchTick);
    DECLARE_FUNCTION(execDemoRead);
    DECLARE_FUNCTION(execIsMisMatch);
    DECLARE_FUNCTION(execGUIDString);
    DECLARE_FUNCTION(execDemoActive);
    DECLARE_FUNCTION(execFindViewPort);
    DECLARE_FUNCTION(execGetArray);
    DECLARE_FUNCTION(execWriteDemoInfo);
    DECLARE_FUNCTION(execBasePath);
    DECLARE_FUNCTION(execRename);
    DECLARE_FUNCTION(execkill);
    DECLARE_FUNCTION(execgetdemo);
    void eventDemoReadDone(const FString& Map, BITFIELD bServerDemo, FLOAT Time, INT NumFrames)
    {
        Uudnative_eventDemoReadDone_Parms Parms;
        Parms.Map=Map;
        Parms.bServerDemo=bServerDemo;
        Parms.Time=Time;
        Parms.NumFrames=NumFrames;
        ProcessEvent(FindFunctionChecked(UDEMO_DemoReadDone),&Parms);
    }
    void eventPackageRequired(const FString& Package, INT Size, BITFIELD Installed, FGuid myGUID, INT gen, BITFIELD Cached)
    {
        Uudnative_eventPackageRequired_Parms Parms;
        Parms.Package=Package;
        Parms.Size=Size;
        Parms.Installed=Installed;
        Parms.myGUID=myGUID;
        Parms.gen=gen;
        Parms.Cached=Cached;
        ProcessEvent(FindFunctionChecked(UDEMO_PackageRequired),&Parms);
    }
    DECLARE_CLASS(Uudnative,UObject,0,udemo)
    NO_DEFAULT_CONSTRUCTOR(Uudnative)
};


struct UDemoInterface_eventNetPacketReceived_Parms
{
};
struct UDemoInterface_eventLinkToPlayer_Parms
{
    class APlayerPawn* P;
    BITFIELD LockOn;
};
class UDEMO_API UDemoInterface : public UObject
{
public:
    class APlayerPawn* DemoSpec;
    class UuDemoDriver* DemoDriver;
    FLOAT mySpeed;
    BYTE PlayBackMode;
    BITFIELD bDoingMessagePlay:1 GCC_PACK(4);
    FLOAT ltsoffset GCC_PACK(4);
    FStringNoInit IllegalActors[20];
    BITFIELD bDebug:1 GCC_PACK(4);
    BITFIELD bAnthDebug:1;
    DECLARE_FUNCTION(execGetStartTime);
    DECLARE_FUNCTION(execSetPlayBackMode);
    DECLARE_FUNCTION(execIsPaused);
    DECLARE_FUNCTION(execPauseDemo);
    DECLARE_FUNCTION(execGetTotalFrames);
    DECLARE_FUNCTION(execGetCurrentFrame);
    DECLARE_FUNCTION(execGetTotalTime);
    DECLARE_FUNCTION(execGetCurrentTime);
    DECLARE_FUNCTION(execReadCache);
    DECLARE_FUNCTION(execReadTo);
    DECLARE_FUNCTION(execJumpBack);
    DECLARE_FUNCTION(execSetSpeed);
    void eventNetPacketReceived()
    {
        ProcessEvent(FindFunctionChecked(UDEMO_NetPacketReceived),NULL);
    }
    void eventLinkToPlayer(class APlayerPawn* P, BITFIELD LockOn)
    {
        UDemoInterface_eventLinkToPlayer_Parms Parms;
        Parms.P=P;
        Parms.LockOn=LockOn;
        ProcessEvent(FindFunctionChecked(UDEMO_LinkToPlayer),&Parms);
    }
    DECLARE_CLASS(UDemoInterface,UObject,0|CLASS_Config,udemo)
    NO_DEFAULT_CONSTRUCTOR(UDemoInterface)
};

#endif

AUTOGENERATE_FUNCTION(UUZHandler,-1,execForceSave);
AUTOGENERATE_FUNCTION(UUZHandler,-1,execSaveFile);
AUTOGENERATE_FUNCTION(UUZHandler,-1,execAppend);
AUTOGENERATE_FUNCTION(Uudnative,-1,execDispatchTick);
AUTOGENERATE_FUNCTION(Uudnative,-1,execDemoRead);
AUTOGENERATE_FUNCTION(Uudnative,-1,execIsMisMatch);
AUTOGENERATE_FUNCTION(Uudnative,-1,execGUIDString);
AUTOGENERATE_FUNCTION(Uudnative,-1,execDemoActive);
AUTOGENERATE_FUNCTION(Uudnative,-1,execFindViewPort);
AUTOGENERATE_FUNCTION(Uudnative,-1,execGetArray);
AUTOGENERATE_FUNCTION(Uudnative,-1,execWriteDemoInfo);
AUTOGENERATE_FUNCTION(Uudnative,-1,execBasePath);
AUTOGENERATE_FUNCTION(Uudnative,-1,execRename);
AUTOGENERATE_FUNCTION(Uudnative,-1,execkill);
AUTOGENERATE_FUNCTION(Uudnative,-1,execgetdemo);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execGetStartTime);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execSetPlayBackMode);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execIsPaused);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execPauseDemo);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execGetTotalFrames);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execGetCurrentFrame);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execGetTotalTime);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execGetCurrentTime);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execReadCache);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execReadTo);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execJumpBack);
AUTOGENERATE_FUNCTION(UDemoInterface,-1,execSetSpeed);

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
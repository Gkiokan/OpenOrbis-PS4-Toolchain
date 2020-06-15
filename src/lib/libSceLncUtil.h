#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceLncUtilAcquireCpuBudgetOfExtraAudioDevices();
void sceLncUtilAcquireCpuBudgetOfImeForBigApp();
void sceLncUtilAcquireCpuBudgetOfInGameStore();
void sceLncUtilActivateCdlg();
void sceLncUtilAddLocalProcess();
void sceLncUtilBlockAppSuspend();
void sceLncUtilBlockingGetEventForDaemon();
void sceLncUtilContinueApp();
void sceLncUtilCrashSyscore();
void sceLncUtilDeactivateCdlg();
void sceLncUtilDeclareReadyForSuspend();
void sceLncUtilDisableSuspendNotification();
void sceLncUtilEnableSuspendNotification();
void sceLncUtilFinishSpecialResume();
void sceLncUtilForceKillApp();
void sceLncUtilForceKillLocalProcess();
void sceLncUtilGetApp0DirPath();
void sceLncUtilGetAppCategory();
void sceLncUtilGetAppFocusedAppStatus();
void sceLncUtilGetAppId();
void sceLncUtilGetAppIdOfBigApp();
void sceLncUtilGetAppIdOfMiniApp();
void sceLncUtilGetAppLaunchedUser();
void sceLncUtilGetAppStatus();
void sceLncUtilGetAppStatusListForShellUIReboot();
void sceLncUtilGetAppTitleId();
void sceLncUtilGetAppType();
void sceLncUtilGetCdlgExec();
void sceLncUtilGetCoredumpState();
void sceLncUtilGetDbgExecutablePath();
void sceLncUtilGetEventForDaemon();
void sceLncUtilGetEventForShellUI();
void sceLncUtilGetLocalProcessStatusList();
void sceLncUtilGetParentSocket();
void sceLncUtilGetResultKillApp();
void sceLncUtilGetResultLaunchAppByTitleId();
void sceLncUtilInitialize();
void sceLncUtilIsActiveCdlg();
void sceLncUtilIsAppSuspended();
void sceLncUtilIsCpuBudgetOfExtraAudioDevicesAvailable();
void sceLncUtilIsPs2Emu();
void sceLncUtilIsShellUiFgAndGameBgCpuMode();
void sceLncUtilKickCoredumpOnlyProcMem();
void sceLncUtilKillApp();
void sceLncUtilKillAppWithReason();
void sceLncUtilKillLocalProcess();
void sceLncUtilLaunchApp();
void sceLncUtilLoadExec();
void sceLncUtilNotifyCoredumpRequestEnd();
void sceLncUtilNotifyCoredumpRequestProgress();
void sceLncUtilNotifyVshReady();
void sceLncUtilRaiseException();
void sceLncUtilRaiseExceptionLocalProcess();
void sceLncUtilRegisterCdlgSharedMemoryName();
void sceLncUtilRegisterDaemon();
void sceLncUtilRegisterShellUI();
void sceLncUtilReleaseCpuBudgetOfExtraAudioDevices();
void sceLncUtilReleaseCpuBudgetOfImeForBigApp();
void sceLncUtilReleaseCpuBudgetOfInGameStore();
void sceLncUtilResumeApp();
void sceLncUtilResumeLocalProcess();
void sceLncUtilSetAppFocus();
void sceLncUtilSetCdlgExec();
void sceLncUtilSetControllerFocus();
void sceLncUtilSetControllerFocusPermission();
void sceLncUtilStartKillApp();
void sceLncUtilStartLaunchAppByTitleId();
void sceLncUtilSuspendApp();
void sceLncUtilSuspendBackgroundApp();
void sceLncUtilSuspendLocalProcess();
void sceLncUtilSystemSuspend();
void sceLncUtilTerminate();
void sceLncUtilTryBlockAppSuspend();
void sceLncUtilUnblockAppSuspend();
void sceLncUtilUnregisterCdlgSharedMemoryName();
void sceLncUtilUnregisterDaemon();
void sceLncUtilUnregisterShellUI();
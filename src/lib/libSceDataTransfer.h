#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceDataTransferHostAbort();
void sceDataTransferHostLaunch();
void sceDataTransferHostNotifyEasySignInReady();
void sceDataTransferInitialize();
void sceDataTransferTargetAbortBindSavedata();
void sceDataTransferTargetAbortDeactivate();
void sceDataTransferTargetAbortEth0();
void sceDataTransferTargetAbortGetDeviceInfo();
void sceDataTransferTargetAbortGetDeviceInfoApplication();
void sceDataTransferTargetAbortGetTitles();
void sceDataTransferTargetAbortGetUsers();
void sceDataTransferTargetAbortLaunch();
void sceDataTransferTargetAbortPrepareTransfer();
void sceDataTransferTargetAbortPwrReq();
void sceDataTransferTargetAbortReboot();
void sceDataTransferTargetAbortSendSsoNew2Old();
void sceDataTransferTargetAbortSendSsoOld2New();
void sceDataTransferTargetAbortTransfer();
void sceDataTransferTargetAbortTransferSpeed();
void sceDataTransferTargetEventIsAuthReady();
void sceDataTransferTargetEventIsIPv6Ready();
void sceDataTransferTargetEventIsPwrReqReady();
void sceDataTransferTargetGetFailedUsers();
void sceDataTransferTargetGetRebootData();
void sceDataTransferTargetGetTransferProgress();
void sceDataTransferTargetRequestAbortSearch();
void sceDataTransferTargetRequestActivate();
void sceDataTransferTargetRequestAuth();
void sceDataTransferTargetRequestBindSavedata();
void sceDataTransferTargetRequestComplete();
void sceDataTransferTargetRequestCreateRebootData();
void sceDataTransferTargetRequestDeactivate();
void sceDataTransferTargetRequestGetDeviceInfo();
void sceDataTransferTargetRequestGetDeviceInfoApplication();
void sceDataTransferTargetRequestGetTitles();
void sceDataTransferTargetRequestGetUsers();
void sceDataTransferTargetRequestLaunch();
void sceDataTransferTargetRequestPrepareTransfer();
void sceDataTransferTargetRequestPrepareTransferProgress();
void sceDataTransferTargetRequestPwrReq();
void sceDataTransferTargetRequestReboot();
void sceDataTransferTargetRequestSearch();
void sceDataTransferTargetRequestSendSsoNew2Old();
void sceDataTransferTargetRequestSendSsoOld2New();
void sceDataTransferTargetRequestStartTransfer();
void sceDataTransferTargetRequestTransferSpeed();
void sceDataTransferTerminate();

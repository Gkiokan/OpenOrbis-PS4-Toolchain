#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceBgftServiceDownloadFindActivePatchTask();
void sceBgftServiceDownloadFindActivePupTask();
void sceBgftServiceDownloadFindTaskByContentId();
void sceBgftServiceDownloadGetProgress();
void sceBgftServiceDownloadPauseTask();
void sceBgftServiceDownloadPauseTaskAll();
void sceBgftServiceDownloadQueryTask();
void sceBgftServiceDownloadRegisterTask();
void sceBgftServiceDownloadRegisterTaskByStorage();
void sceBgftServiceDownloadResumeTask();
void sceBgftServiceDownloadResumeTaskAll();
void sceBgftServiceDownloadStartTask();
void sceBgftServiceDownloadStartTaskAll();
void sceBgftServiceDownloadStopTask();
void sceBgftServiceDownloadStopTaskAll();
void sceBgftServiceInit();
void sceBgftServiceIntAbortNotificationEvent();
void sceBgftServiceIntDebugDownloadCorruptPkg();
void sceBgftServiceIntDebugDownloadRegisterPkg();
void sceBgftServiceIntDebugDownloadRequest();
void sceBgftServiceIntDebugPlayGoIsPaused();
void sceBgftServiceIntDebugPlayGoResume();
void sceBgftServiceIntDebugPlayGoRevertToFullState();
void sceBgftServiceIntDebugPlayGoRevertToInitialState();
void sceBgftServiceIntDebugPlayGoRevertToSnapshot();
void sceBgftServiceIntDebugPlayGoSnapshotByTitleId();
void sceBgftServiceIntDebugPlayGoSuspend();
void sceBgftServiceIntDownloadCheckPatchUpdateState();
void sceBgftServiceIntDownloadDebugDeleteBgftEnvFile();
void sceBgftServiceIntDownloadDebugDownloadBgftEnvFile();
void sceBgftServiceIntDownloadDebugGetBgftEnvInfoString();
void sceBgftServiceIntDownloadFindActiveGameAndGameAcTask();
void sceBgftServiceIntDownloadFindActiveTask();
void sceBgftServiceIntDownloadGetApplicationDataSize();
void sceBgftServiceIntDownloadGetExtUsbUserStorageSize();
void sceBgftServiceIntDownloadGetGameAndGameAcProgress();
void sceBgftServiceIntDownloadGetPatchProgress();
void sceBgftServiceIntDownloadGetPlayGoProgress();
void sceBgftServiceIntDownloadGetProgress();
void sceBgftServiceIntDownloadGetTaskInfo();
void sceBgftServiceIntDownloadGetUserStorageSize();
void sceBgftServiceIntDownloadPauseTask();
void sceBgftServiceIntDownloadQueryTask();
void sceBgftServiceIntDownloadQueryTaskSection();
void sceBgftServiceIntDownloadRegisterTask();
void sceBgftServiceIntDownloadRegisterTaskByStorage();
void sceBgftServiceIntDownloadRegisterTaskByStorageEx();
void sceBgftServiceIntDownloadRegisterTaskStore();
void sceBgftServiceIntDownloadReregisterTaskPatch();
void sceBgftServiceIntDownloadResumeTask();
void sceBgftServiceIntDownloadSetHighPriority();
void sceBgftServiceIntDownloadSetResumeState();
void sceBgftServiceIntDownloadSetStartState();
void sceBgftServiceIntDownloadStartTask();
void sceBgftServiceIntDownloadStartTaskAll();
void sceBgftServiceIntDownloadStopTask();
void sceBgftServiceIntDownloadStopTaskAll();
void sceBgftServiceIntDownloadUnregisterTask();
void sceBgftServiceIntDownloadUnregisterTaskAll();
void sceBgftServiceIntExtUsbCheckActiveDownloadTasks();
void sceBgftServiceIntGetNotificationEvent();
void sceBgftServiceIntGetNotificationParam();
void sceBgftServiceIntGetTaskInfoValueInt();
void sceBgftServiceIntGetTaskInfoValueString();
void sceBgftServiceIntGetTaskInfoValueStringIndex();
void sceBgftServiceIntInit();
void sceBgftServiceIntPlayGoGetApplicationIniChunkSize();
void sceBgftServiceIntPlayGoGetDownloadTaskId();
void sceBgftServiceIntSetTaskVisible();
void sceBgftServiceIntTerm();
void sceBgftServiceIntUploadGetAvailableTaskCount();
void sceBgftServiceIntUploadGetProgress();
void sceBgftServiceIntUploadGetTaskInfo();
void sceBgftServiceIntUploadQueryTask();
void sceBgftServiceIntUploadQueryTaskSection();
void sceBgftServiceIntUploadRegisterTask();
void sceBgftServiceIntUploadSetHighPriority();
void sceBgftServiceIntUploadSetStartState();
void sceBgftServiceIntUploadStartTask();
void sceBgftServiceIntUploadStartTaskAll();
void sceBgftServiceIntUploadStopTask();
void sceBgftServiceIntUploadStopTaskAll();
void sceBgftServiceIntUploadUnregisterTask();
void sceBgftServiceIntUploadUnregisterTaskAll();
void sceBgftServiceTerm();

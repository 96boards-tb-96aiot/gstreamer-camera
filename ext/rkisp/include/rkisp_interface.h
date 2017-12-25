#ifndef RKISP_X3A_INTERFACE
#define RKISP_X3A_INTERFACE

#ifdef __cplusplus
extern "C" {
#endif

/* -------- CamIsp10CtrItf interface -----------*/
int
rkisp_start(void* &engine, int vidFd, const char* ispNode, const char* tuningFile);

int
rkisp_stop(void* &engine);

#ifdef __cplusplus
}
#endif

#endif

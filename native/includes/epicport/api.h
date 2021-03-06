/*
 * api.h
 *
 *  Created on: 15 нояб. 2013 г.
 *      Author: caiiiycuk
 */

#ifndef API_H_
#define API_H_


#ifdef __cplusplus 
extern "C" {
#endif

extern bool Epicport_CanSave();
extern bool Epicport_CanLoad();
extern void Epicport_PushSave(const char*);
extern void Epicport_PlayMusic(const char*, int);
extern void Epicport_VolumeMusic(int);
extern void Epicport_HaltMusic();
extern void Epicport_SelectLoadFileDialog(const char* extension, void callback(char*));
extern void Epicport_SelectSaveFileDialog(const char* extension, void callback(char*));

#ifdef __cplusplus 
}
#endif


#endif /* API_H_ */

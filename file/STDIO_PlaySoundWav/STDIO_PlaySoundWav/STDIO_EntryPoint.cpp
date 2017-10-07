/*
Author: Tai Du Phat
hcmc - oct 2, 2014
www.stdio.vn

Please keep this comment in your source code!
*/

#ifndef _WINDOWS_H
#define _WINDOWS_H
#pragma GCC system_header
#include <_mingw.h>

#ifdef RC_INVOKED && !defined(NOWINRES)
/* winresrc.h includes the necessary headers */
#include <winresrc.h>
#else
#ifdef RC_INVOKED
#define NOATOM
#define NOCOMM
#define NOCRYPT
#define NOGDI
#define NOGDICAPMASKS
#define NOKANJI
#define NOMCX
#define NOMETAFILE
#define NOMINMAX
#define NOMSG
#define NOOPENFILE
#define NOWH
#define NORASTEROPS
#define NOSCROLL
#define NOSOUND
#define NOSYSMETRICS
#define NOTEXTMETRIC
#endif /* def RC_INVOKED */
#endif /* def RC_INVOKED && !defined(NOWINRES) */

#ifndef RC_INVOKED
#include <excpt.h>
#include <stdarg.h>
#endif /* ndef RC_INVOKED */

#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#include <winnls.h>
#include <wincon.h>
#include <winver.h>
#include <winreg.h>
#include <winnetwk.h>

#ifndef WIN32_LEAN_AND_MEAN
#include <cderr.h>
#include <dde.h>
#include <ddeml.h>
#include <dlgs.h>
#include <lzexpand.h>
#include <mmsystem.h>
#include <nb30.h>
#include <rpc.h>
#include <shellapi.h>
#include <winperf.h>
#include <winsock.h>

#ifndef NOCRYPT
#include <wincrypt.h>
#include <winefs.h>
#include <winscard.h>
#endif /* ndef NOCRYPT */

#ifndef NOGDI
#include <winspool.h>

/* In older versions we disallowed COM declarations in __OBJC__
   because of conflicts with @interface directive.  Define _OBJC_NO_COM
   to keep this behaviour.  */ 
#ifndef _OBJC_NO_COM

#ifdef INC_OLE1
#include <ole.h>
#else /* ndef INC_OLE1 */

#include <ole2.h>
#endif /* def INC_OLE1 */

#endif /* ndef _OBJC_NO_COM */

#include <commdlg.h>
#endif /* ndef NOGDI */

#endif /* WIN32_LEAN_AND_MEAN */

#include <stralign.h>

#ifdef INC_OLE2
#include <ole2.h>
#endif /* def INC_OLE2 */

#ifndef NOSERVICE
#include <winsvc.h>
#endif /* ndef NOSERVICE */

#ifndef NOMCX
#include <mcx.h>
#endif /* ndef NOMCX */

#ifndef NOIME
#include <imm.h>
#endif /* ndef NOIME */

#ifdef __OBJC__
/* FIXME: Not undefining BOOL here causes all BOOLs to be WINBOOL (int),
   but undefining it causes trouble as well if a file is included after
   windows.h
*/
#undef BOOL
#endif

#endif
#ifndef UNICODE
#define UNICODE
#endif

#include <stdio.h>
#include "Windows.h"

#pragma comment(lib, "winmm.lib")

void main()
{
	bool isPlay = PlaySound(L"STDIO_SOUND_LOGO.wav", NULL, SND_FILENAME);

	if (isPlay)
	{
		printf("This sound can be played");
	}
}

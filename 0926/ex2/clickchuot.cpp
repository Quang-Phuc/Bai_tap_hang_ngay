#include <windows.h>

bool KeyIsPressed ( unsigned char k ) {
	USHORT status = GetAsyncKeyState ( k );
	return (( ( status & 0x8000 ) >> 15 ) == 1) || (( status & 1 ) == 1);
}

int WINAPI WinMain ( HINSTANCE hInst, HINSTANCE P, LPSTR CMD, int nShowCmd ) {

	HWND target = GetForegroundWindow ( );
	//	pt is for the mouse position, wrect is for the client information. The mouse coords to be sent to the window
	//		must be relative to the top-left corner of the client area, so I have to include that too.
	POINT pt;
	RECT wrect;

	while ( true ) {

		//	ctrl + T to make the front-most window the targetted window
		if ( KeyIsPressed ( VK_CONTROL ) && KeyIsPressed ( 'T' ) ) {
			target = GetForegroundWindow ( );
		}

		//	ctrl + esc to quit
		if ( KeyIsPressed ( VK_CONTROL ) && KeyIsPressed ( VK_ESCAPE ) ) {
			break;
		}

		//	ctrl + left alt to send messages every 5 milliseconds to the target window
		if ( KeyIsPressed ( VK_CONTROL ) && KeyIsPressed ( VK_LMENU ) ) {
			GetCursorPos ( &pt );
			GetClientRect ( target, &wrect );
			//	Final argument holds the mouse positions
			PostMessage ( target, WM_LBUTTONDOWN, 0, ( pt.x - wrect.left ) & ( ( pt.y - wrect.top ) << 16 ) );
			PostMessage ( target, WM_LBUTTONUP, 0, ( pt.x - wrect.left ) & ( ( pt.y - wrect.top ) << 16 ) );

			Sleep ( 5 );
		}

	}

	return 0;

}

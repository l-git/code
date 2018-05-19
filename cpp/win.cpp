#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrevInst,LPSTR lpCmdLine,int nShowCmd)

{
	int nResult=MessageBox(NULL,
			"An example of Cancel,Retry,Continue",
			"Hello Message Box!",
			MB_ICONERROR|MB_ABORTRETRYIGNORE);
	
	switch(nResult)
	{
		case IDABORT:
			// 'Abort' was pressed

			
			break;
		case IDRETRY:
			// 'Retry' was pressed
			break;
		case IDIGNORE:
			// 'Ignore' was pressed
			break;
	}

	return 0;
}
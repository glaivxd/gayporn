#include <Windows.h>
#include <stdio.h>

int main()
{
	while (1)
	{
		HWND window = GetForegroundWindow();

		if (window)
			SetWindowTextW(window, L"gay porn");

		Sleep(1);
	}
}
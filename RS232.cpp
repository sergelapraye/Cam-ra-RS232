//---------------------------------------------------------------------------

#pragma hdrstop

#include "RS232.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

bool RS232::Open()
{
	com = CreateFile("COM1",
					GENERIC_WRITE|GENERIC_READ,
					0,
					NULL,
					OPEN_EXISTING,
					FILE_FLAG_NO_BUFFERING, //FILE_FLAG_OVERLAPPED,
					NULL);

	if(com == INVALID_HANDLE_VALUE)
	{
		return false;
	}
	else
	{
		DCB serie;
		// configuration de l’objet
		GetCommState(com, &serie);
		serie.BaudRate = 9600;
		serie.ByteSize = 8;
		serie.Parity = NOPARITY;
		serie.StopBits = ONESTOPBIT;
		SetCommState(com, &serie);
	}

    return true;
}

void RS232::Close()
{
	if(com != INVALID_HANDLE_VALUE)
	{
        CloseHandle(com);
    }
}

void RS232::Write(char * buf, int len)
{
	unsigned long nbBytesSend;
	WriteFile(com, buf, len, &nbBytesSend, NULL);
}

bool RS232::Read()
{
	char c = 0x00;
	unsigned long nbBytesRecv;

	if(ReadFile(com, &c, 1, &nbBytesRecv, NULL) != 0)
	{
		buffer.push_back(c);
		return true;
	}

	return false;
}

std::deque<char> & RS232::getBuffer()
{
    return buffer;
}

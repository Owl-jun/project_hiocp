#pragma once
#include "CustomStructs.hpp"

class IOHandler
{
public:
	static void OnAccept(AcceptContext* ctx, size_t transferred);
	static void OnRecv(IOContext* ctx, size_t transferred);
	static void OnSend(IOContext* ctx);
};


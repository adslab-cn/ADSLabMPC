#pragma once
#include <aux_parameter/keypack.h>

std::pair<SignExtend2KeyPack, SignExtend2KeyPack> keyGenSignExtend2(int bin, int bout, GroupElement rin, GroupElement rout);
// copy CodeGenerator::AVXtype
enum {
	T_66 = 1 << 1,
	T_F3 = 1 << 2,
	T_F2 = 1 << 3,
	T_0F = 1 << 5,
	T_0F38 = 1 << 6,
	T_0F3A = 1 << 7,
	T_L0 = 1 << 8,
	T_L1 = 1 << 9,
	T_WIG = 1 << 10, // default
	T_W0 = 1 << 11,
	T_W1 = 1 << 12,
	T_EW0 = 1 << 13,
	T_EW1 = 1 << 14,
	T_YMM = 1 << 15,
	T_EVEX = 1 << 16,
	T_ER_X = 1 << 17, // xmm{er}
	T_ER_Y = 1 << 18, // ymm{er}
	T_ER_Z = 1 << 19, // zmm{er}
	T_SAE_X = 1 << 20, // xmm{sae}
	T_SAE_Y = 1 << 21, // ymm{sae}
	T_SAE_Z = 1 << 22, // zmm{sae}
	T_MUST_EVEX = 1 << 23,
	T_B32 = 1 << 24, // m32bcst
	T_B64 = 1 << 25, // m64bcst
	T_XXX
};

const int NONE = 256; // same as Xbyak::CodeGenerator::NONE

std::string type2String(int type)
{
	std::string str;
	if (type & T_0F) {
		if (!str.empty()) str += " | ";
		str += "T_0F";
	}
	if (type & T_0F38) {
		if (!str.empty()) str += " | ";
		str = "T_0F38";
	}
	if (type & T_0F3A) {
		if (!str.empty()) str += " | ";
		str = "T_0F3A";
	}
	if (type & T_66) {
		if (!str.empty()) str += " | ";
		str += "T_66";
	}
	if (type & T_F3) {
		if (!str.empty()) str += " | ";
		str += "T_F3";
	}
	if (type & T_F2) {
		if (!str.empty()) str += " | ";
		str += "T_F2";
	}
	if (type & T_L0) {
		if (!str.empty()) str += " | ";
		str += "VEZ_L0";
	}
	if (type & T_L1) {
		if (!str.empty()) str += " | ";
		str += "VEZ_L1";
	}
	if (type & T_W0) {
		if (!str.empty()) str += " | ";
		str += "T_W0";
	}
	if (type & T_W1) {
		if (!str.empty()) str += " | ";
		str += "T_W1";
	}
	if (type & T_EW0) {
		if (!str.empty()) str += " | ";
		str += "T_EW0";
	}
	if (type & T_EW1) {
		if (!str.empty()) str += " | ";
		str += "T_EW1";
	}
	if (type & T_YMM) {
		if (!str.empty()) str += " | ";
		str += "T_YMM";
	}
	if (type & T_EVEX) {
		if (!str.empty()) str += " | ";
		str += "T_EVEX";
	}
	if (type & T_ER_X) {
		if (!str.empty()) str += " | ";
		str += "T_ER_X";
	}
	if (type & T_ER_Y) {
		if (!str.empty()) str += " | ";
		str += "T_ER_Y";
	}
	if (type & T_ER_Z) {
		if (!str.empty()) str += " | ";
		str += "T_ER_Z";
	}
	if (type & T_SAE_X) {
		if (!str.empty()) str += " | ";
		str += "T_SAE_X";
	}
	if (type & T_SAE_Y) {
		if (!str.empty()) str += " | ";
		str += "T_SAE_Y";
	}
	if (type & T_SAE_Z) {
		if (!str.empty()) str += " | ";
		str += "T_SAE_Z";
	}
	if (type & T_MUST_EVEX) {
		if (!str.empty()) str += " | ";
		str += "T_MUST_EVEX";
	}
	if (type & T_B32) {
		if (!str.empty()) str += " | ";
		str += "T_B32";
	}
	if (type & T_B64) {
		if (!str.empty()) str += " | ";
		str += "T_B64";
	}
	return str;
}
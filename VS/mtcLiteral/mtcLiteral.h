/*
Copyright 2019 tkfmhmnk

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _MTC_LITERAL_H
#define _MTC_LITERAL_H

namespace mtc {
	/**
		�����̕�����^���܂Ƃ߂��\���́B_MULTITYPE_STR�Ƒg�ݍ��킹�Ďg�����Ƃ�z��
	*/
	class CStrings {
	public:
		constexpr CStrings(const char* pc, const wchar_t* pL, const char16_t* pu, const char32_t* pU, const char8_t* pu8) :
			c(pc), L(pL), u(pu), U(pU),u8(pu8) {
		};
		const char* c;
		const wchar_t* L;
		const char16_t* u;
		const char32_t* U;
		const char8_t* u8;
	};
}

/**
	���]�̌^�œ���̕������擾�ł���֐��̒�`��W�J����
*/
#define MULTITYPE_CHAR(name,val)template<class CharT> constexpr CharT name() {\
		return val;\
	};\
	template<> constexpr char name<char>(){\
		return val;\
	};\
	template<> constexpr wchar_t name<wchar_t>(){\
		return L##val;\
	};\
	template<> constexpr char16_t name<char16_t>(){\
		return u##val;\
	};\
	template<> constexpr char32_t name<char32_t>(){\
		return U##val;\
	};\
	template<> constexpr char8_t name<char8_t>(){\
		return u8##val;\
	}

/**
	������𕡐��̕����񃊃e�����ɂ��ēW�J����
*/
#define _MULTITYPE_STR(arg) {arg , L##arg , u##arg , U##arg , u8##arg} 

#define MULTITYPE_CSTR(name, ...) constexpr CStrings _##name[] = {__VA_ARGS__};\
	constexpr std::size_t name##Size = sizeof(_##name)/sizeof(CStrings);\
	template<class CharT> constexpr const CharT* name(const int index) {\
		return (_##name+index)->c;\
	};\
	template<> constexpr const char* name<char>(const int index) {\
		return (_##name+index)->c;\
	};\
	template<> constexpr const wchar_t* name<wchar_t>(const int index) {\
		return (_##name+index)->L;\
	};\
	template<> constexpr const char16_t* name<char16_t>(const int index) {\
		return (_##name+index)->u;\
	};\
	template<> constexpr const char32_t* name<char32_t>(const int index) {\
		return (_##name+index)->U;\
	};\
	template<> constexpr const char8_t* name<char8_t>(const int index) {\
		return (_##name+index)->u8;\
	}

namespace mtc {
	MULTITYPE_CHAR(Comma, ',');
	MULTITYPE_CHAR(Dot, '.');
	MULTITYPE_CHAR(CR, '\r');
	MULTITYPE_CHAR(LF, '\n');
	MULTITYPE_CHAR(Zero, '0');
	MULTITYPE_CHAR(UA, 'A');
	MULTITYPE_CHAR(Minus, '-');
	MULTITYPE_CHAR(DQuo, '\"');
	MULTITYPE_CHAR(NullChar, '\0');
}

#endif
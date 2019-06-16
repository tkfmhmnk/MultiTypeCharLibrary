/*
Copyright [2019] [tkfmhmnk]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
limitations under the License.
*/

#include "pch.h"
#include"mtcNumericConv.h"
#include"mtcNumericConv_private.h"

namespace mtc {
	namespace NumericConv {

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(int src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_signed(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(unsigned int src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_unsigned(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(char src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_signed(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(unsigned char src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_unsigned(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(short src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_signed(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(unsigned short src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_unsigned(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(long src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_signed(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(unsigned long src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_unsigned(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(long long src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_signed(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(unsigned long long src, const int base) {
			std::basic_string<char32_t> tempStr;
			switch (base) {
			case 10:
				_private::Integer2CharT_10_unsigned(tempStr, src);
				break;
			case 16:
				_private::Integer2CharT_16(tempStr, src);
				break;
			case 2:
				_private::Integer2CharT_2(tempStr, src);
				break;
			}
			return tempStr;
		}


		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(float src, const int base) {
			std::basic_string<char32_t> tempStr;
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(double src, const int base) {
			std::basic_string<char32_t> tempStr;
			return tempStr;
		}

		template<> MTCNUMERICCONV_ATTRBT std::basic_string<char32_t> MTCNUMERICCONV_CALL ToString(long double src, const int base) {
			std::basic_string<char32_t> tempStr;
			return tempStr;
		}
	}
}
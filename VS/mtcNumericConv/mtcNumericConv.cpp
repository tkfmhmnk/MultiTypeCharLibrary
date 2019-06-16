#include "pch.h"
#include"mtcNumericConv.h"

namespace mtc {
	namespace NumericConv {

		template<> MTCNUMERICCONV_ATTRBT int MTCNUMERICCONV_CALL ToNumeric<int>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stoi(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT long MTCNUMERICCONV_CALL ToNumeric<long>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stol(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT long long MTCNUMERICCONV_CALL ToNumeric<long long>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stoll(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT unsigned long MTCNUMERICCONV_CALL ToNumeric<unsigned long>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stoul(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT unsigned long long MTCNUMERICCONV_CALL ToNumeric<unsigned long long>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stoull(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT float MTCNUMERICCONV_CALL ToNumeric<float>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stof(str, idx);
		}

		template<> MTCNUMERICCONV_ATTRBT double MTCNUMERICCONV_CALL ToNumeric<double>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stod(str, idx);
		}

		template<> MTCNUMERICCONV_ATTRBT long double MTCNUMERICCONV_CALL ToNumeric<long double>(const std::basic_string<char>& str, std::size_t* idx, int base) {
			return std::stold(str, idx);
		}

		template<> MTCNUMERICCONV_ATTRBT int MTCNUMERICCONV_CALL ToNumeric<int>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stoi(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT long MTCNUMERICCONV_CALL ToNumeric<long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stol(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT long long MTCNUMERICCONV_CALL ToNumeric<long long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stoll(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT unsigned long MTCNUMERICCONV_CALL ToNumeric<unsigned long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stoul(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT unsigned long long MTCNUMERICCONV_CALL ToNumeric<unsigned long long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stoull(str, idx, base);
		}

		template<> MTCNUMERICCONV_ATTRBT float MTCNUMERICCONV_CALL ToNumeric<float>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stof(str, idx);
		}

		template<> MTCNUMERICCONV_ATTRBT double MTCNUMERICCONV_CALL ToNumeric<double>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stod(str, idx);
		}

		template<> MTCNUMERICCONV_ATTRBT long double MTCNUMERICCONV_CALL ToNumeric<long double>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base) {
			return std::stold(str, idx);
		}
	}
}

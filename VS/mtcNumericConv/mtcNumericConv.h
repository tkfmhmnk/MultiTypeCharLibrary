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

#ifndef _MTC_NUMERIC_CONV_H
#define _MTC_NUMERIC_CONV_H

#include<string>
#include"mtcLiteral.h"

#ifdef MTCNUMERICCONV_EXPORTS
#define MTCNUMERICCONV_ATTRBT __declspec(dllexport)
#else
#define MTCNUMERICCONV_ATTRBT __declspec(dllimport)
#endif

#define MTCNUMERICCONV_CALL __stdcall

namespace mtc {
	namespace NumericConv {
		template<class CharT> std::basic_string<CharT> ToString(int src, const int base = 10) {


			static constexpr int bufSize = 64;
			static constexpr CharT Zero = mtc::Zero<CharT>();
			static constexpr CharT UA = mtc::UA<CharT>();

			CharT buf[bufSize];

			int count = 0;
			int next;
			std::basic_string<CharT> tempStr;
			tempStr.reserve(16 - 1);

			switch (base) {
			case 10:
				if (src >= 0) {
					do {
						next = src / base;
						buf[count++] = Zero + (CharT)(src - next * base);
						src = next;
					} while (next != 0);
				}
				else {
					tempStr.push_back(mtc::Minus<CharT>());
					do {
						next = src / base;
						buf[count++] = Zero + (CharT)(next * base - src);
						src = next;
					} while (next != 0);
				}
				count--;
				do {
					tempStr.push_back(buf[count--]);
				} while (count >= 0);


				break;

			case 16:
				//todo
				break;
			case 8:
				//todo
				break;
			case 2:
				//todo
				break;

			}

			return tempStr;
		}



		/**
			�e���v���[�g������sto�n�̕�����-���l�ϊ��֐�
			@param str string�^�̕�����
			@param idx �ϊ��Ɏg�p����Ȃ������v�f�̃C���f�b�N�X�̑����
			@param base �����̐��l�ϊ��ɂ����鐔�l�̊
			@return �ϊ����ʂ̐��l
			@todo char��wchar_t�ȊO�̕�����������悤�ɂ��Ȃ���΂�Ȃ�
		*/
		template<class NumericT>
		NumericT MTCNUMERICCONV_CALL ToNumeric(const std::basic_string<char>& str, std::size_t* idx = nullptr, int base = 10) {
			return (NumericT)(std::stoi(str, idx, base));
		}

		/**
			�e���v���[�g������sto�n�̕�����-���l�ϊ��֐�
			@param str wstring�^�̕�����
			@param idx �ϊ��Ɏg�p����Ȃ������v�f�̃C���f�b�N�X�̑����
			@param base �����̐��l�ϊ��ɂ����鐔�l�̊
			@return �ϊ����ʂ̐��l
		*/
		template<class NumericT>
		NumericT MTCNUMERICCONV_CALL ToNumeric(const std::basic_string<wchar_t>& str, std::size_t* idx = nullptr, int base = 10) {
			return (NumericT)(std::stoi(str, idx, base));
		}

		/**
			int�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT int MTCNUMERICCONV_CALL ToNumeric<int>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long MTCNUMERICCONV_CALL ToNumeric<long>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			long long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long long MTCNUMERICCONV_CALL ToNumeric<long long>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			unsigned long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT unsigned long MTCNUMERICCONV_CALL ToNumeric<unsigned long>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			unsigned long long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT unsigned long long MTCNUMERICCONV_CALL ToNumeric<unsigned long long>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			float�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT float MTCNUMERICCONV_CALL ToNumeric<float>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			double�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT double MTCNUMERICCONV_CALL ToNumeric<double>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			long double�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long double MTCNUMERICCONV_CALL ToNumeric<long double>(const std::basic_string<char>& str, std::size_t* idx, int base);

		/**
			int�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT int MTCNUMERICCONV_CALL ToNumeric<int>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long MTCNUMERICCONV_CALL ToNumeric<long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			long long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long long MTCNUMERICCONV_CALL ToNumeric<long long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			unsigned long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT unsigned long MTCNUMERICCONV_CALL ToNumeric<unsigned long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			unsinged long long�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT unsigned long long MTCNUMERICCONV_CALL ToNumeric<unsigned long long>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			float�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT float MTCNUMERICCONV_CALL ToNumeric<float>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			double�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT double MTCNUMERICCONV_CALL ToNumeric<double>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);

		/**
			long double�^�œ��ꉻ����ToNumeric
		*/
		template<> MTCNUMERICCONV_ATTRBT long double MTCNUMERICCONV_CALL ToNumeric<long double>(const std::basic_string<wchar_t>& str, std::size_t* idx, int base);





		template<class NumericT>
		NumericT MTCNUMERICCONV_CALL ToNumeric(const std::basic_string<char16_t>& str, std::size_t* idx = nullptr, int base = 10) {

		}

		template<class NumericT>
		NumericT MTCNUMERICCONV_CALL ToNumeric(const std::basic_string<char32_t>& str, std::size_t* idx = nullptr, int base = 10) {

		}

		template<class NumericT>
		NumericT MTCNUMERICCONV_CALL ToNumeric(const std::basic_string<char8_t>& str, std::size_t* idx = nullptr, int base = 10) {

		}

	}

}

#endif